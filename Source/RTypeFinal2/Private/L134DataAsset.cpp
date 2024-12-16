#include "L134DataAsset.h"

UL134DataAsset::UL134DataAsset() {
    this->BpActor = NULL;
    this->HoldTime = 0.25f;
    this->GrowDelay = 0.10f;
    this->growTime = 1.00f;
    this->DecayTime = 0.17f;
    this->RateToHit = 0.75f;
    this->DL[0] = 1800.00f;
    this->DL[1] = 1800.00f;
    this->DL[2] = 1800.00f;
    this->DL[3] = 1800.00f;
    this->RE[0] = 1800.00f;
    this->RE[1] = 1800.00f;
    this->RE[2] = 1800.00f;
    this->RE[3] = 1800.00f;
    this->APB = 500.00f;
    this->APB2 = 800.00f;
}


