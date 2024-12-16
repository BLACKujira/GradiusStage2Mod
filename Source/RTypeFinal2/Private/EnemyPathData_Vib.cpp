#include "EnemyPathData_Vib.h"

UEnemyPathData_Vib::UEnemyPathData_Vib() {
    this->Cmd = EEnemyPath_VibCmd::Stop;
    this->Ch = 0;
    this->ForceFeedback = NULL;
}


