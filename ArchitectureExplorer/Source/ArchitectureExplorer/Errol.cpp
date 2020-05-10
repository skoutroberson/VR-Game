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

// Sets default values
AErrol::AErrol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Enemy = GetOwner(); 
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

	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
	UE_LOG(LogTemp, Warning, TEXT("YOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"));
}

// Called every frame
void AErrol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AErrol::SetupThetaGrid()
{
	nodes = new ThetaNode[GridWidth * GridHeight * 3];
	for (int z = 0; z < 3; z++)
	{
		const int GridOffset = z * GridWidth * GridHeight;
		for (int x = 0; x < GridWidth; x++)
		{
			for (int y = 0; y < GridHeight; y++)
			{
				const int f = (y * GridWidth + x) + GridOffset;
				nodes[f].x = x * NodeDist;
				nodes[f].y = y * NodeDist;
				nodes[f].z = z * FloorHeight;
				nodes[f].bObstacle = false;
				nodes[f].parent = nullptr;
				nodes[f].bVisited = false;
				//DrawDebugSphere(GetWorld(), FVector(nodes[f].x, nodes[f].y, FloorHeight * z), 10, 4, FColor(255, 0, 0), true);


				if (!(GetWorld()->LineTraceSingleByChannel(HitStruct, FVector(nodes[f].x, nodes[f].y, nodes[f].z), FVector(nodes[f].x, nodes[f].y, nodes[f].z - 1), ECC_WorldDynamic, RayCollisionParams)))
				{
					nodes[f].bObstacle = true;
					//DrawDebugSphere(GetWorld(), FVector(nodes[f].x, nodes[f].y, nodes[f].z + 10), 10, 4, FColor(255, 100, 50), true);
				}
				else
				{
					//////////////////////////////////////////////// all of these variables dont need to be const & Im pretty sure
					const FVector & Pos = FVector(x * NodeDist, y * NodeDist, z * FloorHeight + 1);
					const FQuat & Qwa = FQuat(0.0f, 0.0f, 0.0f, 0.0f);
					const FVector & BoxHalfExtent = FVector(EnemyHalfWidth + 1, EnemyHalfWidth, 0.5f);
					const FCollisionShape & Boxy = FCollisionShape::MakeBox(BoxHalfExtent);
					for (TActorIterator<AStaticMeshActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)							// I NEED TO OPTIMIZE THIS SO THAT IT ONLY CHECKS ACTORS CLOSE TO ITS XYZ
					{
						// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
						AStaticMeshActor *SMActor = *ActorItr;
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

				for (auto n : nodes[f].NeighbourNodes)
				{
					DrawDebugLine(GetWorld(), FVector(nodes[f].x, nodes[f].y, nodes[f].z + 1), FVector(n->x, n->y, n->z + 1), FColor(100 * z, 200, 210 / (z + 1)), true);
				}

			}
		}
	}
}

void AErrol::ConnectStairNodes()
{

}

