// Fill out your copyright notice in the Description page of Project Settings.
//*.generated.h ���������һ�У�class������Ԫ��Ϣ����������
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseGeoActor.generated.h"

UCLASS()
class GAM1E1_API ABaseGeoActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseGeoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
