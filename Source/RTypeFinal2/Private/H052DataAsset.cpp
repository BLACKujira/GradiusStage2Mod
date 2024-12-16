#include "H052DataAsset.h"

UH052DataAsset::UH052DataAsset() {
    this->AP[0] = 33.33f;
    this->AP[1] = 33.33f;
    this->AP[2] = 33.33f;
    this->AP[3] = 33.33f;
    this->AP[4] = 33.33f;
    this->AP[5] = 33.33f;
    this->AP[6] = 33.33f;
    this->PartNum[0] = 6;
    this->PartNum[1] = 6;
    this->PartNum[2] = 6;
    this->PartNum[3] = 6;
    this->PartNum[4] = 6;
    this->PartNum[5] = 6;
    this->PartNum[6] = 6;
    this->RapidInterval_Max = 0.03f;
    this->RapidInterval_Min = 0.01f;
    this->ShootPosRange = 300.00f;
    this->speed = 45000.00f;
    this->SpeedInit = 20000.00f;
    this->SpeedMin = 10000.00f;
    this->InitSpeedTime = 0.10f;
    this->DecSpeedTime = 0.20f;
    this->MinSpeedTime = 0.10f;
    this->AccSpeedTime = 0.20f;
    this->LRadius = 200.00f;
    this->ERadius = 500.00f;
    this->LightNum = 4;
}


