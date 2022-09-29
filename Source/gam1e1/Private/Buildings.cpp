// Fill out your copyright notice in the Description page of Project Settings.


#include "Buildings.h"

void ABuildings::SpawnPillars()
{
	UE_LOG(LogTemp, Warning, TEXT("spawn running"));

	for (int i = 0; i < Pillars.Num(); i++)
	{
		if (Pillars[i])
			Pillars[i]->DestroyComponent();
		
	}

	Pillars.Empty();

	for (int i = 0; i < NumPillars; i++)
	{
		UStaticMeshComponent* smc = (UStaticMeshComponent*)AddComponentByClass(UStaticMeshComponent::StaticClass(), false, FTransform(), true);

		if (smc)
		{
			smc->RegisterComponent();
			smc->SetMobility(EComponentMobility::Movable);
			smc->AttachToComponent(Root, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			smc->SetWorldLocation(GetActorLocation() + FVector(0, PillarsGap * i, 0));
			smc->SetWorldScale3D(FVector(1, 1, FMath::RandRange(1, 4)));
			smc->SetStaticMesh(PillarMesh);
			Pillars.Add(smc);
		}
	}
}

// Sets default values
ABuildings::ABuildings()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

}

// Called when the game starts or when spawned
void ABuildings::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABuildings::OnConstruction(const FTransform& Transform)
{
	SpawnPillars();
}

// Called every frame
void ABuildings::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

