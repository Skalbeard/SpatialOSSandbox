
#include "MyLocalPlayer.h"

UMyLocalPlayer::UMyLocalPlayer()
{
    bCameraCut = false;
}

FSceneView* UMyLocalPlayer::CalcSceneView(class FSceneViewFamily* ViewFamily, FVector& OutViewLocation, FRotator& OutViewRotation, FViewport* Viewport, class FViewElementDrawer* ViewDrawer, EStereoscopicPass StereoPass)
{
    // ULocalPlayer::CalcSceneView() use a ViewInitOptions to create
    // a FSceneView which contains a "bCameraCut" variable
    // See : H:\GitHub\UnrealEngine\Engine\Source\Runtime\Renderer\Private\SceneCaptureRendering.cpp
    // as well for bCameraCutThisFrame in USceneCaptureComponent2D
    FSceneView* View = Super::CalcSceneView(ViewFamily,
        OutViewLocation,
        OutViewRotation,
        Viewport,
        ViewDrawer,
        StereoPass);
    if (bCameraCut)
    {
        View->bCameraCut = true;
        bCameraCut = false;
    }

    return View;
}

void UMyLocalPlayer::PerformCameraCut()
{
    bCameraCut = true;
}