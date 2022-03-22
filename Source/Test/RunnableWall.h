// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "RunnableWall.generated.h"


UCLASS()
class TEST_API ARunnableWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARunnableWall();

	//wall mesh
	UPROPERTY(EditAnywhere);
	class UStaticMeshComponent* WallMesh;

	//collision box for triggering the wall run
	UPROPERTY(VisibleAnywhere, Category = Collision)
		class UBoxComponent* RunnableTrigger;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
