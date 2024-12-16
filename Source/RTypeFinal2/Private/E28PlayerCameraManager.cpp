#include "E28PlayerCameraManager.h"

AE28PlayerCameraManager::AE28PlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->bDefaultConstrainAspectRatio = true;
}


