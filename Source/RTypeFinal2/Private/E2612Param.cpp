#include "E2612Param.h"

UE2612Param::UE2612Param() {
    this->CollisionArray.AddDefaulted(4);
    this->BrokenCollisionArray.AddDefaulted(4);
    this->DispInScreenRangeUp = 0.00f;
    this->DispInScreenRangeDown = 0.00f;
}


