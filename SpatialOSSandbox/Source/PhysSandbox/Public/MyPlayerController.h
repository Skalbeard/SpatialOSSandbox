// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */

 //Forward declaration
class APortalManager;
class UMyLocalPlayer;


UCLASS()
class PHYSSANDBOX_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	APortalManager* PortalManager;
	FMatrix GetCameraProjectionMatrix();
	void PerformCameraCut();

protected:
	// Called when the game starts or when spawned
	void BeginPlay() override;
};
