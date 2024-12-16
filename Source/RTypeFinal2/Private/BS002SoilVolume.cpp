#include "BS002SoilVolume.h"

ABS002SoilVolume::ABS002SoilVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->Tags.AddDefaulted(1);
}


