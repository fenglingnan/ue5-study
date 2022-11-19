// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/SpringArmComponent.h"
#include "PW_bird.generated.h"


UCLASS()
class GAM1E1_API APW_bird : public APawn
{
	GENERATED_BODY()

private: 
	UPROPERTY(EditDefaultsOnly)
		USceneComponent* Root;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere)
		USpringArmComponent* CameraBoom;
	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;
	UPROPERTY(EditAnywhere)
		float jumpForce = 300.0f;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UUserWidget> WidgetClass;

public:
	// Sets default values for this pawn's properties
	APW_bird();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	void Jump();

	UFUNCTION()
		void onMeshHit(UPrimitiveComponent * HitComp, AActor * otherActor, UPrimitiveComponent * otherComp, FVector NormalImpulse, const FHitResult& Hit);
};
