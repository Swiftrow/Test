// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableActor.h"

// Sets default values
AInteractableActor::AInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initialize WallMesh and TriggerBox
	WallMesh = CreateDefaultSubobject<UStaticMeshComponent>("WallMesh");
	WallMesh->SetupAttachment(RootComponent);
	TriggerBox = CreateDefaultSubobject<UBoxComponent>("RunnableTrigger");
	TriggerBox->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	TriggerBox->InitBoxExtent(FVector(0.0f,0.0f,0.0f));
	TriggerBox->SetupAttachment(WallMesh);
	


}

// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

