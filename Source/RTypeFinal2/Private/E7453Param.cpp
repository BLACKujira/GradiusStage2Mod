#include "E7453Param.h"

UE7453Param::UE7453Param() {
    this->BodyMesh = NULL;
    this->AnimBP = NULL;
    this->MoveEffect = NULL;
    this->SoundMoveUp = NULL;
    this->SoundMoveDown = NULL;
    this->SoundMoveUpEnd = NULL;
    this->SoundMoveDownEnd = NULL;
    this->MoveLightONTime = 0.00f;
    this->MoveLightOFFTime = 0.00f;
    this->MoveLightONIntervalTime = 0.00f;
    this->MoveLightFlashingCount = 1;
    this->MoveLength = 0.00f;
    this->MoveSpeed = 0.00f;
}


