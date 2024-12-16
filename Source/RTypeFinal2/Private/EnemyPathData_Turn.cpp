#include "EnemyPathData_Turn.h"

UEnemyPathData_Turn::UEnemyPathData_Turn() {
    this->Cmd = EEnemyPath_TurnCmd::X;
    this->Time = 0.00f;
    this->angle = 0.00f;
}


