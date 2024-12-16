#include "H009DataAsset.h"

UH009DataAsset::UH009DataAsset() {
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
    this->ShootPosRange = 750.00f;
    this->speed = 45000.00f;
    this->LRadius = 200.00f;
    this->ERadius = 500.00f;
    this->CartridgeScale = 1.25f;
    this->CartridgeSpeed_Max = 10000.00f;
    this->CartridgeSpeed_Min = 5000.00f;
    this->CartridgeGravity = 15000.00f;
    this->CartridgeAngleRange = 45.00f;
}


