#include "BS013Param.h"

UBS013Param::UBS013Param() {
    this->Defence = 0;
    this->Score = 40000;
    this->TotalBattleTime = 120.00f;
    this->Back_Box_Col_A.AddDefaulted(9);
    this->Back_Box_Col_B.AddDefaulted(9);
    this->Front_Box_Col_A.AddDefaulted(5);
    this->Front_Box_Col_B.AddDefaulted(5);
    this->Front_Cap_Col_A.AddDefaulted(2);
    this->Front_Cap_Col_B.AddDefaulted(2);
    this->Back_Mesh = NULL;
    this->Back_AnimBP = NULL;
    this->Front_Mesh = NULL;
    this->Front_AnimBP = NULL;
    this->JetEffect = NULL;
    this->SmokeEffect = NULL;
    this->BulletShotEffect = NULL;
    this->LaserShotEffect = NULL;
    this->BulletSignEffect = NULL;
    this->LaserSignEffect = NULL;
    this->Damage_Sound = NULL;
    this->Death_Sound = NULL;
    this->BulletShootSound = NULL;
    this->LaserShootSound = NULL;
    this->EntrySound = NULL;
    this->EntrySeparateSound = NULL;
    this->DeathCamaraShake = NULL;
    this->BackScreenPosX = -7000.00f;
    this->FrontScreenPosX = 6000.00f;
    this->EntryForwardSpeed = 6000.00f;
    this->EntryBackSpeed = 5000.00f;
    this->EntryStopTime = 2.00f;
    this->ExitBackSpeed = 5000.00f;
    this->ExitForwardAcceleration = 3000.00f;
    this->ExitForwardMaxSpeed = 8000.00f;
    this->ExitGameClearDelay = 5.00f;
    this->BackMoveCycle = 4.00f;
    this->BackMoveAmplitude = 6000.00f;
    this->FrontMoveCycle = 6.00f;
    this->FrontMoveAmplitude = 1500.00f;
    this->BackMoveUpFlag = false;
    this->FrontMoveUpFlag = true;
    this->DeathPathData = NULL;
    this->BulletDefence = 0.00f;
    this->BulletScore = 200.00f;
    this->BulletHomingTime = 1.20f;
    this->BulletSwitchTime = 40.00f;
    this->BulletSignTime = 0.50f;
    this->BulletPathData[0] = NULL;
    this->BulletPathData[1] = NULL;
    this->BulletPathData[2] = NULL;
    this->BulletPathData[3] = NULL;
    this->BulletParam = NULL;
    this->LaserLength = 4000.00f;
    this->LaserSignTime = 0.50f;
    this->LaserParam = NULL;
}


