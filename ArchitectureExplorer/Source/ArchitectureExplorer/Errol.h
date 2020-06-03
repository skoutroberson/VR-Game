// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "CollisionQueryParams.h"
#include "Engine/EngineTypes.h"
#include "UObject/Class.h"
#include "Errol.generated.h"

using namespace std;

UENUM()
enum AnimState
{
	Idle	UMETA(DisplayName = "Idle"),
	Walk	UMETA(DisplayName = "Walk"),
	Run		UMETA(DisplayName = "Run"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API AErrol : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AErrol();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ErrolStuff)
	float ErrolSpeed = 0;
	

	AActor* Enemy;
	AActor* Player;
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* VRRoot;

	FVector EnemyLocation;
	FRotator EnemyRotation;
	FVector PlayerLocation;
	FVector EnemyDirection;
	int EnemyFloor;

	// THETA* STUFF	

	struct ThetaNode
	{
		bool bObstacle = false;					// Is the node an obstruction?
		bool bVisited = false;					// Have we searched this node before?
		float fGlobalGoal;						// Distance to goal so far
		float fLocalGoal;						// Distance to goal if we took the alternative
		int x;									// Nodes position in 3D space
		int y;
		int z;
		vector<ThetaNode*> NeighbourNodes;			// Connections to neighbours
		ThetaNode* parent;							// Node connecting to this node that offers shortest parent
	};



	//	Graph of nodes for A* (representing 2D grid)
	ThetaNode *nodes = nullptr;
	//	Starting position of enemy for A*
	ThetaNode *NodeStart = nullptr;
	//	Goal position of enemy for A*
	ThetaNode *NodeEnd = nullptr;
	//	Stack of nodes that represent the Enemy path
	TArray<ThetaNode*> EnemyPath;

	//	Width of A* grid
	const int GridWidth = 60;

	//	Height of A* grid
	const int GridHeight = 60;
	const int NumFloors = 3;
	//	Distance nodes are from eachother in A* grid. (61cm = 2ft)
	const int NodeDist = 60;
	//	Variable for checking when AStarCallCounter == AStarCallTime
	const int AStarCallTime = 60;
	//	Counter for calling SolveAStar() every n frames
	int AStarCallCounter = 0;
	//	Will need to change the way I do this when I make 2 stories
	const int FloorHeight = 280;
	const int EnemyHalfWidth = 30;
	const int EnemyHalfHeight = 105;
	//	For Integer division of FVector PlayerLocation, Might not need...
	int PlayerX;
	//	For Integer division of FVector PlayerLocation, Might not need...
	int PlayerY;
	int PlayerZ;
	//	For Integer division of FVector EnemyLocation, Might not need...
	int EnemyX;
	//	For Integer division of FVector EnemyLocation, Might not need...
	int EnemyY;
	int EnemyZ;
	//	Enemy FOV is 100 degrees
	const int FOVHalfangle = 50;
	//	Multiplier to make the FOV triangle (2D view frustum) bigger
	const int FOVMultiplier = 1200;
	//	Enemy's movement speed
	float EnemySpeed = 200.0f;
	//	Enemy's next location to move to
	FVector InterpLocation;
	//	From the POV of the enemy, this is the right point of the FOV triangle (2D view frustum)
	FVector FOVPointR;
	//	From the POV of the enemy, this is the left point of the FOV triangle (2D view frustum)
	FVector FOVPointL;
	//	Height of FOV triangle (2D view frustum), starting value is 2000
	int FOVHeight = 2000;

	void SetupThetaGrid();

	void ConnectStairNodes();
	const int StairHalfLength = 200;

	//	Check if player location is inside FOV triangle (2D view frustum)
	//	A function to check whether point P(x, y) lies inside the triangle formed
	//	by A(x1, y1), B(x2, y2) and C(x3, y3) 
	bool IsInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y);
	//	Finds A* path
	void SolveThetaStar();
	//	If Enemy has reached InterpLocation, try to update InterpLocation
	void UpdateInterpLocation();
	//	Returns true if raycast from Start collides with End
	bool IsClearPath(FVector Start, FVector End);

	bool InPlayerLOS();
	// Gotta think of a better name for this function
	void ArrivedInterpLoc();

	int GetEnemyFloor();

	FHitResult HitStruct = FHitResult(ForceInit); ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	FCollisionQueryParams RayCollisionParams;

};
