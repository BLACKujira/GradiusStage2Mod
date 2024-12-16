#include "EnemyMaskDraw.h"
#include "Components/SceneCaptureComponent.h"

UEnemyMaskDraw::UEnemyMaskDraw(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList;
    this->bCaptureEveryFrame = false;
    this->bCaptureOnMovement = false;
    this->ProjectionType = ECameraProjectionMode::Orthographic;
    this->Enemy = NULL;
    this->MaskRadius = 500.00f;
    this->MaskHardness = 0.50f;
    this->MaterialUnwrapPosition = NULL;
    this->MaterialMaskDraw = NULL;
    this->MaskDrawMaterialDynamic = NULL;
}


