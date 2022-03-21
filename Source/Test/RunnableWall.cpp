 // Fill out your copyright notice in the Description page of Project Settings.


#include "RunnableWall.h"

// Sets default values
ARunnableWall::ARunnableWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initialize WallMesh and TriggerBox
	WallMesh = CreateDefaultSubobject<UStaticMeshComponent>("WallMesh");
	RunnableTrigger = CreateDefaultSubobject<UBoxComponent>("RunnableTrigger");
	RunnableTrigger->SetupAttachment(RootComponent);
	RunnableTrigger->InitBoxExtent(FVector(200.0f, 100.0f, 100.0f));

}

// Called when the game starts or when spawned
void ARunnableWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARunnableWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

