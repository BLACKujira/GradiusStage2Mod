#include "BS502Param.h"

UBS502Param::UBS502Param() {
    this->Defence = 0;
    this->Score = 20000;
    this->Body_Mesh = NULL;
    this->Body_AnimBP = NULL;
    this->Bit_Mesh = NULL;
    this->Bit_AnimBP = NULL;
    this->SoundLaser = NULL;
    this->SoundDamage = NULL;
    this->SoundNoDamage = NULL;
    this->DeathTime = 5.00f;
    this->DestructTime = 300.00f;
    this->MoveXLine = 7000.00f;
    this->EntrySpeed = 2000.00f;
    this->ShootPattern1.AddDefaulted(6);
    this->ShootPattern2.AddDefaulted(6);
    this->ShootPattern3.AddDefaulted(6);
    this->ShootPattern4.AddDefaulted(6);
    this->ShootPattern5.AddDefaulted(6);
    this->ShootPattern6.AddDefaulted(6);
    this->LaserStopTime = 0.50f;
    this->NoTurnXLine = 5000.00f;
    this->BS502_LaserParam = NULL;
    this->BitPos.AddDefaulted(8);
    this->BitSpeed = 4000.00f;
    this->SignEffect = NULL;
    this->ShotEffect = NULL;
}


