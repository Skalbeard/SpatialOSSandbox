#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "PortalManager.generated.h"


//Forward declaration
class AMyPlayerController;
class AMyCharacter;
class APortal;
class UTextureRenderTarget2D;


UCLASS()
class PHYSSANDBOX_API APortalManager : public AActor
{
    GENERATED_UCLASS_BODY()

public:
    APortalManager();
    //APortalManager(const FObjectInitializer& ObjectInitializer);

    // Called by a Portal actor when wanting to teleport something
    UFUNCTION(BlueprintCallable, Category = "Portal")
        void RequestTeleportByPortal(APortal* Portal, AActor* TargetToTeleport);

    

    // Save a reference to the PlayerControler
    void SetControllerOwner(AMyPlayerController* NewOwner);

    // Various setup that happens during spawn
    void Init();

    // Manual Tick
    void Update(float DeltaTime);

    // Find all the portals in world and update them
    // returns the most valid/usable one for the Player
    APortal* UpdatePortalsInWorld();

    // Update SceneCapture
    void UpdateCapture(APortal* Portal);

private:
    //Function to create the Portal render target
    void GeneratePortalTexture();

    UPROPERTY()
        USceneCaptureComponent2D* SceneCapture;

    UPROPERTY(transient)
        UTextureRenderTarget2D* PortalTexture;

    UPROPERTY()
        AMyPlayerController* ControllerOwner;

    UPROPERTY()
        AMyCharacter* Character;

    int32 PreviousScreenSizeX;
    int32 PreviousScreenSizeY;

    float UpdateDelay;
};