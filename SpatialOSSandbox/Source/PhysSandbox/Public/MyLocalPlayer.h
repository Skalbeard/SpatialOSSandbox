#pragma once

#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "MyLocalPlayer.generated.h"

UCLASS()
class PHYSSANDBOX_API UMyLocalPlayer : public ULocalPlayer
{
    GENERATED_BODY()

        UMyLocalPlayer();

public:
    FSceneView* CalcSceneView(class FSceneViewFamily* ViewFamily, FVector& OutViewLocation, FRotator& OutViewRotation, FViewport* Viewport, class FViewElementDrawer* ViewDrawer, EStereoscopicPass StereoPass) override;

    void PerformCameraCut();

private:
    bool bCameraCut;
};