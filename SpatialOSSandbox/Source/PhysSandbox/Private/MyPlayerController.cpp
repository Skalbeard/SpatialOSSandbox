// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "PortalManager.h"
#include "MyLocalPlayer.h"

// Called when the game starts or when spawned
void AMyPlayerController::BeginPlay()
{
   //FActorSpawnParameters SpawnParams;
   //
   //PortalManager = nullptr;
   //PortalManager = GetWorld()->SpawnActor<APortalManager>(APortalManager::StaticClass(),
   //    FVector::ZeroVector,
   //    FRotator::ZeroRotator,
   //    SpawnParams);
   //PortalManager->AttachToActor(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
   //PortalManager->SetControllerOwner(this);
   //PortalManager->Init();

   //LocalPlayer = Cast<UMyLocalPlayer>(GetLocalPlayer());
}

void AMyPlayerController::PerformCameraCut()
{
   // if (LocalPlayer != nullptr)
   // {
   //     LocalPlayer->PerformCameraCut();
   // }
}

FMatrix AMyPlayerController::GetCameraProjectionMatrix()
{
   FMatrix ProjectionMatrix;
   //
   //if (GetLocalPlayer() != nullptr)
   //{
   //    FSceneViewProjectionData PlayerProjectionData;
   //
   //    GetLocalPlayer()->GetProjectionData(GetLocalPlayer()->ViewportClient->Viewport,
   //        EStereoscopicPass::eSSP_FULL,
   //        PlayerProjectionData);
   //
   //    ProjectionMatrix = PlayerProjectionData.ProjectionMatrix;
   //}
   //
   return ProjectionMatrix;
}