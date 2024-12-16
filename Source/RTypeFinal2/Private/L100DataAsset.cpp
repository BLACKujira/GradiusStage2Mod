#include "L100DataAsset.h"

UL100DataAsset::UL100DataAsset() {
    this->speed = 12000.00f;
    this->Hp = 2.00f;
    this->AP = 80.00f;
    this->HP2 = 2.00f;
    this->AP2 = 110.00f;
    this->ShotInterval = 0.08f;
    this->RotSpeedRate = 0.02f;
    this->AngleMax = 30.00f;
    this->AngleMin = -30.00f;
    this->HPS[0] = 1.00f;
    this->HPS[1] = 1.00f;
    this->ApS[0] = 3.00f;
    this->ApS[1] = 3.00f;
    this->HitSER[0] = 100.00f;
    this->HitSER[1] = 100.00f;
    this->HitSLR[0] = 100.00f;
    this->HitSLR[1] = 100.00f;
    this->ShotSNums[0] = 16;
    this->ShotSNums[1] = 16;
    this->ShotSW[0] = 500.00f;
    this->ShotSW[1] = 500.00f;
    this->ShotSD[0] = 125.00f;
    this->ShotSD[1] = 125.00f;
    this->ShotST[0] = 0.40f;
    this->ShotST[1] = 0.40f;
    this->ShotSA[0] = 0.80f;
    this->ShotSA[1] = 0.80f;
    this->ShotSInterval = 0.50f;
}


