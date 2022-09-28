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
	CameraBoom->SetupAttachment(Mesh);
	CameraBoom->TargetArmLength = 600.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

}

// Called when the game starts or when spawned
void APW_bird::BeginPlay()
{
	Super::BeginPlay();
	Mesh->SetSimulatePhysics(true);
	Mesh->BodyInstance.bLockXTranslation = true;
	Mesh->BodyInstance.bLockYTranslation = true;
	Mesh->BodyInstance.bLockRotation = true;

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

	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APW_bird::Jump);
}

void APW_bird::Jump()
{
	//FString str = UTF8_TO_TCHAR("��");
	//FString str = UTF16_TO_TCHAR("��");
	UE_LOG(LogTemp, Warning, TEXT("jumping"));
	Mesh->BodyInstance.SetLinearVelocity(FVector::UpVector * jumpForce, false);
}
