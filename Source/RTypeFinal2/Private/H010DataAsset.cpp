#include "H010DataAsset.h"

UH010DataAsset::UH010DataAsset() {
    this->ApGrow[0] = 300.00f;
    this->ApGrow[1] = 300.00f;
    this->ApGrow[2] = 300.00f;
    this->ApGrow[3] = 300.00f;
    this->ApGrow[4] = 300.00f;
    this->ApGrow[5] = 300.00f;
    this->ApGrow[6] = 300.00f;
    this->ApGrow[7] = 300.00f;
    this->ApKeep[0] = 600.00f;
    this->ApKeep[1] = 600.00f;
    this->ApKeep[2] = 600.00f;
    this->ApKeep[3] = 600.00f;
    this->ApKeep[4] = 600.00f;
    this->ApKeep[5] = 600.00f;
    this->ApKeep[6] = 600.00f;
    this->ApKeep[7] = 600.00f;
    this->ApDecay[0] = 600.00f;
    this->ApDecay[1] = 600.00f;
    this->ApDecay[2] = 600.00f;
    this->ApDecay[3] = 600.00f;
    this->ApDecay[4] = 600.00f;
    this->ApDecay[5] = 600.00f;
    this->ApDecay[6] = 600.00f;
    this->ApDecay[7] = 600.00f;
    this->ApSpark[0] = 0.00f;
    this->ApSpark[1] = 0.00f;
    this->ApSpark[2] = 0.00f;
    this->ApSpark[3] = 0.00f;
    this->ApSpark[4] = 0.00f;
    this->ApSpark[5] = 0.00f;
    this->ApSpark[6] = 0.00f;
    this->ApSpark[7] = 0.00f;
    this->Length[0] = 1600.00f;
    this->Length[1] = 1600.00f;
    this->Length[2] = 1600.00f;
    this->Length[3] = 1600.00f;
    this->Length[4] = 1600.00f;
    this->Length[5] = 1600.00f;
    this->Length[6] = 1600.00f;
    this->Length[7] = 1600.00f;
    this->growTime[0] = 0.03f;
    this->growTime[1] = 0.03f;
    this->growTime[2] = 0.03f;
    this->growTime[3] = 0.03f;
    this->growTime[4] = 0.03f;
    this->growTime[5] = 0.03f;
    this->growTime[6] = 0.03f;
    this->growTime[7] = 0.03f;
    this->KeepTime = 0.17f;
    this->DecayTime = 0.08f;
    this->CartridgeScale = 2.00f;
    this->CartridgeSpeed_Max = 5000.00f;
    this->CartridgeSpeed_Min = 3000.00f;
    this->CartridgeGravity = 12000.00f;
    this->CartridgeAngleRange = 45.00f;
    this->CartridgeRotateSpeed = 360.00f;
    this->CartridgeLifeTime = 2.50f;
}


