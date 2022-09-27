// Fill out your copyright notice in the Description page of Project Settings.


#include "PW_bird.h"

// Sets default values
APW_bird::APW_bird()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Boom"));
}

// Called when the game starts or when spawned
void APW_bird::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APW_bird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APW_bird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

