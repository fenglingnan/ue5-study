// Fill out your copyright notice in the Description page of Project Settings.


#include "SandActor.h"

// Sets default values
ASandActor::ASandActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASandActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASandActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

