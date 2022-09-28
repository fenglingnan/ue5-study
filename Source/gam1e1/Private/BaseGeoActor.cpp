// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeoActor.h"

// Sets default values
ABaseGeoActor::ABaseGeoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGeoActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("hello unreal"));
	UE_LOG(LogTemp, Warning, TEXT("hello unreal"));
	UE_LOG(LogTemp, Error, TEXT("hello unreal"));
}

// Called every frame
void ABaseGeoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

