#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Portal.generated.h"


class AMyCharacter;
class UCharacterMovementComponent;
class AMyPlayerController;


UCLASS()
class PHYSSANDBOX_API APortal : public AActor
{
    GENERATED_UCLASS_BODY()

protected:
    void BeginPlay() override;

public:
    // Sets default values for this pawn's properties
    APortal();
    //APortal(const FObjectInitializer& ObjectInitializer);
    void Tick(float DeltaTime) override;

    FVector ConvertLocationToActorSpace(FVector Location, AActor* Reference);

    //Status of the Portal (being visualized by the player or not)
    UFUNCTION(BlueprintPure, Category = "Portal")
        bool IsActive();

    UFUNCTION(BlueprintCallable, Category = "Portal")
        void SetActive(bool NewActive);

    //Render target to use to display the portal
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Portal")
        void ClearRTT();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Portal")
        void SetRTT(UTexture* RenderTexture);

    UFUNCTION(BlueprintNativeEvent, Category = "Portal")
        void ForceTick();

    //Target of where the portal is looking
    UFUNCTION(BlueprintPure, Category = "Portal")
        AActor* GetTarget();

    UFUNCTION(BlueprintCallable, Category = "Portal")
        void SetTarget(AActor* NewTarget);

    //Helpers
    UFUNCTION(BlueprintCallable, Category = "Portal")
        bool IsPointInFrontOfPortal(FVector Point, FVector PortalLocation, FVector PortalNormal);

    UFUNCTION(BlueprintCallable, Category = "Portal")
        bool IsPointCrossingPortal(FVector Point, FVector PortalLocation, FVector PortalNormal);

    UFUNCTION(BlueprintCallable, Category = "Portal")
        void TeleportActor(AActor* ActorToTeleport);

    UFUNCTION(BlueprintCallable, Category = "Portal")
        APortalManager* GetPortalManager(AActor* Context);

    UFUNCTION(BlueprintCallable, Category = "Portal")
        bool IsPointInsideBox(FVector Point, UBoxComponent* Box);

protected:
    UPROPERTY(BlueprintReadOnly)
        USceneComponent* PortalRootComponent;

private:
    FRotator ConvertRotationToActorSpace(FRotator Rotation, AActor* Reference);

    bool bIsActive;

    AActor* Target;

    //Used for Tracking movement of a point
    FVector LastPosition;
    bool    LastInFront;
};