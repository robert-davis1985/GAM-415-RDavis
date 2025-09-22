// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "CubeDMIMod.generated.h"

UCLASS()
class FIRSTPERSON415RDAVIS_API ACubeDMIMod : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubeDMIMod();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// defines the cube with a base cube mesh, material, and overlap function to interact with overlap events

	UPROPERTY(EditAnywhere)
	UBoxComponent* boxComp;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* cubeMesh;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* baseMat;

	UPROPERTY()
	UMaterialInstanceDynamic* dmiMat;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverLappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
