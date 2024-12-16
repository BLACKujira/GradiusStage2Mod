#include "E2201Param.h"

UE2201Param::UE2201Param() {
    this->Defence = 0;
    this->Score = 700;
    this->ShellMesh = NULL;
    this->CoreMesh = NULL;
    this->TentacleMesh = NULL;
    this->ShellAnimBP = NULL;
    this->CoreAnimBP = NULL;
    this->TentacleAnimBP = NULL;
    this->S2201Param = NULL;
    this->OpenSignTime = 1.00f;
    this->OpeningTime = 1.00f;
    this->CloseSignTime = 1.00f;
    this->ClosingTime = 1.00f;
    this->CloseTime = 3.00f;
    this->ST_Light1 = NULL;
    this->ST_Light2 = NULL;
    this->ST_LightOpacity = 0.20f;
    this->PointLightIntensity = 5000.00f;
    this->PointLightRadius = 2500.00f;
    this->SpotLightIntensity = 50000.00f;
    this->SpotLightRadius = 20000.00f;
    this->SandEffect = NULL;
    this->ShotEffect = NULL;
    this->ShellDamageSound = NULL;
    this->CoreDamageSound = NULL;
    this->DeathSound = NULL;
    this->ShotSound = NULL;
    this->SignSound = NULL;
    this->OpenSound = NULL;
    this->CloseSound = NULL;
    this->SoundStopTime = 0.50f;
    this->DeathTime = 0.50f;
    this->Core_Material = NULL;
    this->Shell_Material1 = NULL;
    this->Shell_Material2 = NULL;
}


