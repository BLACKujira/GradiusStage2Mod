#include "E5105Param.h"

UE5105Param::UE5105Param() {
    this->Body_Defence = 0;
    this->Body_Score = 1000;
    this->Tentacle_Defence = 0;
    this->Tentacle_Score = 300;
    this->BodyMesh_L = NULL;
    this->BodyMesh_M = NULL;
    this->BodyMesh_S = NULL;
    this->BodyAnimBP = NULL;
    this->TentacleMesh = NULL;
    this->TentacleAnimBP = NULL;
    this->TentacleMesh2 = NULL;
    this->TentacleAnimBP2 = NULL;
    this->ReproductionEffect = NULL;
    this->WaterReproductionEffect = NULL;
    this->AirReproductionEffect = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->WaitSETime = 0.00f;
    this->ReprodutionSignTime = 1.50f;
    this->BodyDeathTime = 1.00f;
    this->TentacleDeathTime = 2.00f;
    this->DebugFlag = false;
    this->DebugFlag2 = false;
}


