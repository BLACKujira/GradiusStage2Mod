#include "H018DataAsset.h"

UH018DataAsset::UH018DataAsset() {
    this->Hp[0] = 200.00f;
    this->Hp[1] = 200.00f;
    this->Hp[2] = 200.00f;
    this->Hp[3] = 200.00f;
    this->Hp[4] = 200.00f;
    this->Hp[5] = 200.00f;
    this->AP[0] = 200.00f;
    this->AP[1] = 200.00f;
    this->AP[2] = 200.00f;
    this->AP[3] = 200.00f;
    this->AP[4] = 200.00f;
    this->AP[5] = 200.00f;
    this->ApMini = 100.00f;
    this->ApTornado = 600.00f;
    this->speed = 18000.00f;
    this->SpeedMini = 18000.00f;
    this->SpeedTornado = 10000.00f;
    this->MiniAngle = -10.00f;
    this->MiniInterval = 0.20f;
    this->MiniInterval2 = 0.15f;
    this->CrushedNum = 4;
    this->CrushedNum2 = 8;
    this->CrushedAngleRange = 60.00f;
    this->TornadoTime = 2.50f;
    this->TornadoHeight = 3200.00f;
    this->DisasterHeight = 1500.00f;
    this->L017Data = NULL;
}


