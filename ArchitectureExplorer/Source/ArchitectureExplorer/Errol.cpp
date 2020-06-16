// Fill out your copyright notice in the Description page of Project Settings.


#include "Errol.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "Components/PrimitiveComponent.h"
#include "WorldCollision.h"
#include "EngineUtils.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Engine/EngineTypes.h"
#include "Engine/World.h"
#include "Physics/GenericPhysicsInterface.h"
#include "Engine/Brush.h"
#include "Components/BrushComponent.h"

// Sets default values
AErrol::AErrol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Enemy = this;
	RayCollisionParams.AddIgnoredActor(this);

	

}

// Called when the game starts or when spawned
void AErrol::BeginPlay()
{

	Super::BeginPlay();

	EnemyLocation = GetActorLocation();
	EnemyRotation = GetActorRotation();
	InterpLocation = EnemyLocation;
	Player = GetWorld()->GetFirstPlayerController()->GetPawn();
	PlayerLocation = Player->GetActorLocation();
	// The more actors I can add to this ignore list the better
	RayCollisionParams.AddIgnoredActor(Player);

	SetupThetaGrid();
	ConnectStairNodes();

	
}

// Called every frame
void AErrol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AStarCallCounter++;
	EnemyLocation = Enemy->GetActorLocation();
	EnemyRotation = Enemy->GetActorRotation();
	EnemyFloor = GetFloor(EnemyLocation.Z);
	EnemyDirection = (InterpLocation - EnemyLocation);
	EnemyDirection.Normalize();								// Pretty sure I could optimize the way of getting the rotation that I dont need this calculation every time but not sure...
	Enemy->SetActorRotation(FMath::Lerp(EnemyRotation, FRotator(EnemyRotation.Pitch, EnemyDirection.Rotation().Yaw, EnemyRotation.Roll), 6 * DeltaTime));
	Enemy->SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(EnemyLocation, InterpLocation, DeltaTime, EnemySpeed));
	ArrivedInterpLoc();

	//	Conditional for calling SolveAStar() every n frames
	if (AStarCallCounter == AStarCallTime)
	{
		if (CanPathfind())
		{
			//TraceCount = 0;
			//Pathfind();
			//UE_LOG(LogTemp, Error, TEXT("%d"), TraceCount);
		}

		AStarCallCounter = 0;
	}
}

bool AErrol::CanPathfind()
{
	PlayerLocation = Player->GetActorLocation();

	if (PlayerLocation.X / NodeDist > 0 && PlayerLocation.X / NodeDist < GridWidth)
	{
		if (PlayerLocation.Y / NodeDist > 0 && PlayerLocation.Y / NodeDist < GridHeight)
		{

			EnemyZ = roundf(EnemyLocation.Z);
			//UE_LOG(LogTemp, Warning, TEXT("%f, %f"), EnemyLocation.Z, EnemyZ % FloorHeight);

			//	If Errol is on first or second floor. (don't pathfind on stairs)
			if (EnemyZ % FloorHeight == 0)
			{
				return true;
			}
			else
			{
				//	If Errol is on third floor
				if (EnemyZ % FloorHeight == 20 && EnemyZ == 876)
				{
					return true;
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("%d, %d"), EnemyZ % FloorHeight, EnemyZ);
				}
			}
		}
	}
	return false;
}

void AErrol::Pathfind()
{
	PlayerX = roundf(PlayerLocation.X / NodeDist);
	PlayerY = roundf(PlayerLocation.Y / NodeDist);
	PlayerZ = roundf(PlayerLocation.Z / FloorHeight);
	EnemyX = roundf(EnemyLocation.X / NodeDist);
	EnemyY = roundf(EnemyLocation.Y / NodeDist);
	EnemyZ = roundf(EnemyLocation.Z / FloorHeight);
	NodeStart = &nodes[EnemyY * GridWidth + EnemyX + EnemyZ * GridWidth * GridHeight];
	NodeEnd = &nodes[PlayerY * GridWidth + PlayerX + PlayerZ * GridWidth * GridHeight];
	DrawDebugSphere(GetWorld(), FVector(NodeEnd->x, NodeEnd->y, NodeEnd->z), 16, 4, FColor(255, 0, 0), false, 0.4f);
	DrawDebugLine(GetWorld(), FVector(NodeEnd->x, NodeEnd->y, NodeEnd->z), FVector(NodeEnd->x, NodeEnd->y, NodeEnd->z + 10000), FColor::Red, false, 0.4f, (uint8)'\000', 1.0f);
	DrawDebugSphere(GetWorld(), FVector(NodeStart->x, NodeStart->y, NodeStart->z), 16, 4, FColor(0, 0, 255), false, 0.4f);
	SolveThetaStar();
}

void AErrol::SetupThetaGrid()
{
	nodes = new ThetaNode[GridWidth * GridHeight * 3];
	for (int z = 0; z < 3; z++)
	{
		const int GridOffset = z * GridWidth * GridHeight;
		int ThirdFloor = 0;
		for (int x = 0; x < GridWidth; x++)
		{
			for (int y = 0; y < GridHeight; y++)
			{
				
				if (z == 2) { ThirdFloor = 20; }

				const int f = (y * GridWidth + x) + GridOffset;
				nodes[f].x = x * NodeDist;
				nodes[f].y = y * NodeDist;
				nodes[f].z = z * FloorHeight + ThirdFloor;
				nodes[f].bObstacle = false;
				nodes[f].parent = nullptr;
				nodes[f].bVisited = false;
				//DrawDebugSphere(GetWorld(), FVector(nodes[f].x, nodes[f].y, FloorHeight * z), 10, 4, FColor(255, 0, 0), true);

				FVector ObstacleTest = FVector(nodes[f].x, nodes[f].y, nodes[f].z);
				if (!(GetWorld()->LineTraceSingleByChannel(HitStruct, ObstacleTest, FVector(ObstacleTest.X, ObstacleTest.Y, ObstacleTest.Z - 1.0f), ECC_WorldDynamic, RayCollisionParams)))
				{
					//DrawDebugLine(GetWorld(), FVector(nodes[f].x, nodes[f].y, nodes[f].z), FVector(nodes[f].x, nodes[f].y, nodes[f].z - 1), FColor::Red, true);
					nodes[f].bObstacle = true;
					//DrawDebugSphere(GetWorld(), FVector(nodes[f].x, nodes[f].y, nodes[f].z + 10), 10, 4, FColor(255, 100, 50), true);
					//UE_LOG(LogTemp, Warning, TEXT("%f %f"), ObstacleTest.X, ObstacleTest.Y);
				}
				else
				{
					//////////////////////////////////////////////// all of these variables dont need to be const & Im pretty sure
					const FVector & Pos = FVector(ObstacleTest.X, ObstacleTest.Y, ObstacleTest.Z + 1);
					const FQuat & Qwa = FQuat(0.0f, 0.0f, 0.0f, 0.0f);
					const FVector & BoxHalfExtent = FVector(EnemyHalfWidth + 1, EnemyHalfWidth, 0.5f);
					const FCollisionShape & Boxy = FCollisionShape::MakeBox(BoxHalfExtent);
					for (TActorIterator<AStaticMeshActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)							// I NEED TO OPTIMIZE THIS SO THAT IT ONLY CHECKS ACTORS CLOSE TO ITS XYZ
					{
						// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
						//AStaticMeshActor *SMActor = *ActorItr;
						if (ActorItr->GetStaticMeshComponent()->OverlapComponent(Pos, Qwa, Boxy)) // && ActorItr->GetStackMeshComponent
						{
							//DrawDebugSphere(GetWorld(), FVector(nodes[f].x, nodes[f].y, nodes[f].z + 10), 10, 4, FColor(255, 100, 50), true);
							nodes[f].bObstacle = true;
						}
					}
					//UE_LOG(LogTemp, Warning, TEXT("%d %d %d \n"), x, y, f);
					//UE_LOG(LogTemp, Warning, TEXT("%d %d"), f, y*nMapWidt);
				}
			}
		}
	}

	// Create connections, in this case nodes are on a regular grid
	for (int z = 0; z < 3; z++)
	{
		const int GridOffset = z * GridWidth * GridHeight;
		for (int x = 0; x < GridWidth; x++)
		{
			for (int y = 0; y < GridHeight; y++)
			{
				const int f = (y * GridWidth + x) + GridOffset;
				if (y > 0)
					nodes[f].NeighbourNodes.push_back(&nodes[((y - 1) * GridWidth + (x + 0)) + GridOffset]);
				if (y < GridHeight - 1)
					nodes[f].NeighbourNodes.push_back(&nodes[((y + 1) * GridWidth + (x + 0)) + GridOffset]);
				if (x > 0)
					nodes[f].NeighbourNodes.push_back(&nodes[((y + 0) * GridWidth + (x - 1)) + GridOffset]);
				if (x < GridWidth - 1)
					nodes[f].NeighbourNodes.push_back(&nodes[((y + 0) * GridWidth + (x + 1)) + GridOffset]);

				//	For Diagonal Movement (Not neccasary)
				/*
				if (y > 0 && x > 0)
					nodes[f].NeighbourNodes.push_back(&nodes[((y - 1) * GridWidth + (x - 1)) + GridOffset]);
				if (y < GridHeight - 1 && x>0)
					nodes[f].NeighbourNodes.push_back(&nodes[((y + 1) * GridWidth + (x - 1)) + GridOffset]);
				if (y > 0 && x < GridWidth - 1)
					nodes[f].NeighbourNodes.push_back(&nodes[((y - 1) * GridWidth + (x + 1)) + GridOffset]);
				if (y < GridHeight - 1 && x < GridWidth - 1)
					nodes[f].NeighbourNodes.push_back(&nodes[((y + 1) * GridWidth + (x + 1)) + GridOffset]);
				*/

				//	Draw Node Connections
				for (auto n : nodes[f].NeighbourNodes)
				{
					//DrawDebugLine(GetWorld(), FVector(nodes[f].x, nodes[f].y, nodes[f].z + 1), FVector(n->x, n->y, n->z + 1), FColor(100 * z, 200, 210 / (z + 1)), true);
				}

			}
		}
	}
}

void AErrol::SolveThetaStar()
{
	EnemyPath.Empty();
	// Reset navigation graph - default all node states. I dont need to do this every single time, it helps for debugging but I should change this once this is locked down.
	for (int z = 0; z < NumFloors; z++)
	{
		const int GridOffset = z * GridWidth * GridHeight;
		for (int x = 0; x < GridWidth; x++)
		{
			for (int y = 0; y < GridHeight; y++)
			{
				const int f = (y * GridWidth + x) + GridOffset;
				nodes[f].bVisited = false;
				nodes[f].fGlobalGoal = INFINITY;
				nodes[f].fLocalGoal = INFINITY;
				nodes[f].parent = nullptr;
			}
		}
	}
	auto distance = [](ThetaNode* a, ThetaNode* b) // For convenience
	{
		return sqrtf((a->x - b->x)*(a->x - b->x) + (a->y - b->y)*(a->y - b->y));
	};
	auto heuristic = [distance](ThetaNode* a, ThetaNode* b)	//
	{
		// Needs
		return distance(a, b);
	};

	// Setup starting conditions
	ThetaNode *nodeCurrent = NodeStart;

	NodeStart->fLocalGoal = 0.0f;
	NodeStart->fGlobalGoal = heuristic(NodeStart, NodeEnd);

	// Add start node to not tested list - this will ensure it gets tested
	// as the algorithm progresses, newly discovered nodes get added to the
	// list, and will themselves be tested later
	TArray<ThetaNode*> listNotTestedNodes;
	listNotTestedNodes.Add(NodeStart);
	//listNotTestedNodes.sort([](const sNode* lhs, const sNode* rhs) { return lhs->fGlobalGoal < rhs->fGlobalGoal; });
	// while (listNotTestedNodes.Num() > 0 && nodeCurrent != NodeEnd) <- this code will find the path faster but it may not be the shortest path
	
	while (listNotTestedNodes.Num() > 0 && nodeCurrent != NodeEnd)
	{

		// Sort Untested nodes by global goal, so lowest is first
		listNotTestedNodes.Sort([](const ThetaNode& lhs, const ThetaNode& rhs) {return lhs.fGlobalGoal < rhs.fGlobalGoal; });
		// Front of listNotTestedNodes is potentially the lowest distance node. Our
		// list may also contain nodes that have been visited, so ditch these...
		while (listNotTestedNodes.Num() > 0 && listNotTestedNodes[0]->bVisited == true)
		{
			listNotTestedNodes.RemoveAt(0);
		}
		// ...or abort because there are no more nodes left to test
		if (listNotTestedNodes.Num() == 0)
		{
			break;
		}

		//	Update Vertex
		nodeCurrent = listNotTestedNodes[0];
		nodeCurrent->bVisited = true;	// We only explore a node once


		//DrawDebugSphere(GetWorld(), FVector(nodeCurrent->x, nodeCurrent->y, nodeCurrent->z), 10, 4, FColor(0, 255, 255), false, 0.5f); //FOR DEBUGGING HEURISTIC IT SHOULD CHECK EVERY NODE ON EVERY FLOOR


		// Check each of this nodes neighbours...
		// IT MIGHT BE SMART TO JUST INITIALIZE EVERY NEIGHBOUR THAT WE ARE LOOKING AT INSTEAD OF THE WHOLE GRAPH!!!!!!!!
		// LOOK AT THETA* ALGORITHM ON WIKI
		for (auto nodeNeighbour : nodeCurrent->NeighbourNodes)
		{
			if (!nodeNeighbour->bVisited && nodeNeighbour->bObstacle == 0)
			{
				// Calculate the neighbours potential lowest parent distance
				float fPossiblyLowerGoal = nodeCurrent->fLocalGoal + distance(nodeCurrent, nodeNeighbour);
				// This if statement is very long but I cant make the two vectors before I check if nodeCurrent->parent is not null
				if (nodeCurrent->parent != nullptr &&
					IsClearPath(FVector(nodeCurrent->parent->x, nodeCurrent->parent->y, nodeCurrent->parent->z), FVector(nodeNeighbour->x, nodeNeighbour->y, nodeNeighbour->z)))
				{
					fPossiblyLowerGoal = nodeCurrent->parent->fLocalGoal + distance(nodeCurrent->parent, nodeNeighbour);
					if (fPossiblyLowerGoal < nodeNeighbour->fLocalGoal)
					{
						nodeNeighbour->parent = nodeCurrent->parent;
						nodeNeighbour->fLocalGoal = fPossiblyLowerGoal;
						nodeNeighbour->fGlobalGoal = nodeNeighbour->fLocalGoal + heuristic(nodeNeighbour, NodeEnd);
					}
				}
				else
				{
					// If choosing to path through this node is a lower distance than what 
					// the neighbour currently has set, update the neighbour to use this node
					// as the path source, and set its distance scores as necessary
					if (fPossiblyLowerGoal < nodeNeighbour->fLocalGoal)
					{
						nodeNeighbour->parent = nodeCurrent;
						nodeNeighbour->fLocalGoal = fPossiblyLowerGoal;

						// The best path length to the neighbour being tested has changed, so
						// update the neighbour's score. The heuristic is used to globally bias
						// the path algorithm, so it knows if its getting better or worse. At some
						// point the algo will realise this path is worse and abandon it, and then go
						// and search along the next best path.
						nodeNeighbour->fGlobalGoal = nodeNeighbour->fLocalGoal + heuristic(nodeNeighbour, NodeEnd);
					}
				}
				listNotTestedNodes.Add(nodeNeighbour);
			}
		}
	}

	/*
	FColor DebugCol;
	for (int x = 0; x < GridWidth; x++)
	{
		for (int y = 0; y < GridHeight; y++)
		{
			if (nodes[y*GridWidth + x].bVisited == true)
			{
				DebugCol = FColor(0, 255, 255);
			}
			else if (&nodes[y*GridWidth + x] == NodeStart)
			{
				DebugCol = FColor(0, 255, 0);
			}
			else if (&nodes[y*GridWidth + x] == NodeEnd)
			{
				DebugCol = FColor(255, 0, 0);
			}
			else
			{
				DebugCol = FColor(0, 0, 255);
			}
			DrawDebugSphere(GetWorld(), FVector(x * NodeDist, y * NodeDist, 180.f), 30, 10, DebugCol, true); //////////// For drawing node representations


		}
	}
	*/

	// Draw Path by starting path the end, and following the parent node trail
	// I need to make it so that this piece of code only runs if the player can see the enemy
	if (NodeEnd != nullptr)
	{
		ThetaNode* p = NodeEnd;
		while (p->parent != nullptr)
		{
			EnemyPath.Add(p);
			DrawDebugLine(GetWorld(), FVector(p->x, p->y, p->z + 2), FVector(p->parent->x, p->parent->y, p->parent->z + 2), FColor(255, 0, 0), false, 0.5);
			p = p->parent;
		}
	}



	//	Only update InterpLocation if the enemy has a path to the goal node
	if (EnemyPath.Num() > 0)
	{
		UpdateInterpLocation();
	}


}

bool AErrol::IsClearPath(FVector Start, FVector End)
{
	//	These are for the point translation so we can get points StartR, StartL, EndR, and EndL
	//	(x2,y2) = point EnemyHalfWidth away from origin translated to be at same angle as enemy is facing
	//	(x1,y1) = rotate point (x2,y2) 270 degrees and then translate to Enemy location so that it lies on Enemy's right bounding box. 
	//	(x3,y3) = same as above but only rotate 90 degrees.
	//	(x4,y4) / (x5,y5) = apply same translations from End point so the lines cast parallel
	FVector Direction = (End - Start);
	Direction.Normalize();
	const float x2 = (cos(Direction.Rotation().Yaw * (PI / 180)) * EnemyHalfWidth);
	const float y2 = (sin(Direction.Rotation().Yaw * (PI / 180)) * EnemyHalfWidth);
	const float x1 = x2 * cos(270 * (PI / 180)) - y2 * sin(270 * (PI / 180)) + Start.X;
	const float y1 = y2 * cos(270 * (PI / 180)) + x2 * sin(270 * (PI / 180)) + Start.Y;
	const float x3 = x2 * cos(90 * (PI / 180)) - y2 * sin(90 * (PI / 180)) + Start.X;
	const float y3 = y2 * cos(90 * (PI / 180)) + x2 * sin(90 * (PI / 180)) + Start.Y;
	const float x4 = x2 * cos(90 * (PI / 180)) - y2 * sin(90 * (PI / 180)) + End.X;
	const float y4 = y2 * cos(90 * (PI / 180)) + x2 * sin(90 * (PI / 180)) + End.Y;
	const float x5 = x2 * cos(270 * (PI / 180)) - y2 * sin(270 * (PI / 180)) + End.X;
	const float y5 = y2 * cos(270 * (PI / 180)) + x2 * sin(270 * (PI / 180)) + End.Y;
	// This is the point that lies on the right side of the enemy's bounding box
	FVector StartR = FVector(x1, y1, Start.Z + 200);
	// This is the point that lies on the left side of the enemy's bounding box
	FVector StartL = FVector(x3, y3, Start.Z + 200);
	FVector EndR = FVector(x5, y5, End.Z + 200);
	FVector EndL = FVector(x4, y4, End.Z + 200);
	//DrawDebugLine(GetWorld(), StartL, EndL, FColor(255, 0, 0), false, 0.5f);
	//DrawDebugLine(GetWorld(), StartR, EndR, FColor(255, 0, 0), false, 0.5f);
	if (StartR.Z != EndR.Z)
	{
		//UE_LOG(LogTemp, Warning, TEXT("CLEAR PATH TRACE Zs are off!!!!!!!!!!! S: %f, E: %f"), StartR.Z, EndR.Z);
		return false;
	}
	else if (GetWorld()->LineTraceSingleByChannel(HitStruct, StartR, EndR, ECC_WorldDynamic, RayCollisionParams) == true)
	{
		TraceCount++;
		return false;
	}
	else if (GetWorld()->LineTraceSingleByChannel(HitStruct, StartL, EndL, ECC_WorldDynamic, RayCollisionParams) == true)
	{
		TraceCount += 2;
		return false;
	}
	TraceCount += 2;
	return true;
}

int AErrol::GetFloor(float ZLocation)
{
	if (ZLocation < FloorHeight)
	{
		return 0;
	}
	else if (ZLocation > FloorHeight && ZLocation < FloorHeight * 2)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}



void AErrol::UpdateInterpLocation()
{
	// Only update InterpLocation if the enemy has a path to follow
	if (EnemyPath.Num() > 0)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Moving to next node..."));
		ThetaNode* InterpNode = EnemyPath.Pop();
		InterpLocation = FVector(InterpNode->x, InterpNode->y, InterpNode->z);
		ErrolSpeed = 100;
	}
	else
	{
		ErrolSpeed = 0;
		//	No new nodes to move to...
	}
}

void AErrol::ArrivedInterpLoc()
{
	// Check if Enemy has made it to the node its moving to
	if (EnemyLocation.Equals(InterpLocation, 0.1f))
	{
		//Only run UpdateInterpLocation() if there is a path to follow
		if (EnemyPath.Num() > 0)
		{
			// Try to update interp location
			UpdateInterpLocation();
		}
		else
		{
			ErrolSpeed = 0;
		}
	}
}

void AErrol::ConnectStairNodes()
{
	//NodeEnd = &nodes[PlayerY * GridWidth + PlayerX + PlayerZ * GridWidth * GridHeight];
	// 45, 13, 1 ---- 66, 13, 0

	//	First hall stair
	nodes[13 * GridWidth + 45 + 1 * GridWidth * GridHeight].NeighbourNodes.push_back(
		&nodes[13 * GridWidth + 66 + 0]
	);
	nodes[13 * GridWidth + 45 + 1 * GridWidth * GridHeight].bObstacle = false;

	nodes[13 * GridWidth + 66 + 0].NeighbourNodes.push_back(
		&nodes[13 * GridWidth + 45 + 1 * GridWidth * GridHeight]
	);
	nodes[13 * GridWidth + 66 + 0].bObstacle = false;

	DrawDebugSphere(GetWorld(), FVector(
		nodes[13 * GridWidth + 45 + 1 * GridWidth * GridHeight].x,
		nodes[13 * GridWidth + 45 + 1 * GridWidth * GridHeight].y,
		nodes[13 * GridWidth + 45 + 1 * GridWidth * GridHeight].z
	), 10, 10, FColor::Purple, true);

	DrawDebugSphere(GetWorld(), FVector(
		nodes[13 * GridWidth + 66 + 0].x,
		nodes[13 * GridWidth + 66 + 0].y,
		nodes[13 * GridWidth + 66 + 0].z
	), 10, 10, FColor::Purple, true);

	//	Kitchen stair
	nodes[82 * GridWidth + 23 + 0].NeighbourNodes.push_back(
		&nodes[103 * GridWidth + 23 + 1 * GridWidth * GridHeight]
	);
	nodes[82 * GridWidth + 23 + 0].bObstacle = false;

	nodes[103 * GridWidth + 23 + 1 * GridWidth * GridHeight].NeighbourNodes.push_back(
		&nodes[82 * GridWidth + 23 + 0]
	);
	nodes[103 * GridWidth + 23 + 1 * GridWidth * GridHeight].bObstacle = false;

	// Main hall stair
	nodes[67 * GridWidth + 78 + 1 * GridWidth * GridHeight].NeighbourNodes.push_back(
		&nodes[67 * GridWidth + 56 + 2 * GridWidth * GridHeight]
	);
	nodes[67 * GridWidth + 78 + 1 * GridWidth * GridHeight].bObstacle = false;

	nodes[67 * GridWidth + 56 + 2 * GridWidth * GridHeight].NeighbourNodes.push_back(
		&nodes[67 * GridWidth + 78 + 1 * GridWidth * GridHeight]
	);
	nodes[67 * GridWidth + 56 + 2 * GridWidth * GridHeight].bObstacle = false;
}