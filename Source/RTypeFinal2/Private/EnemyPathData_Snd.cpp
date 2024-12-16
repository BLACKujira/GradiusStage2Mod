#include "EnemyPathData_Snd.h"

UEnemyPathData_Snd::UEnemyPathData_Snd() {
    this->Cmd = EEnemyPath_SndCmd::Stop;
    this->Ch = 0;
    this->Time = 0.00f;
    this->Cue = NULL;
}


