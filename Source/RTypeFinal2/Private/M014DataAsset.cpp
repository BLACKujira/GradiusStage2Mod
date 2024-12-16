#include "M014DataAsset.h"

UM014DataAsset::UM014DataAsset() {
    this->AP = 100.00f;
    this->EHIT_R = 400.00f;
    this->LHIT_R = 350.00f;
    this->XHIT_R = 400.00f;
    this->ShotOfsR = 200.00f;
    this->ShotDir[0] = 180.00f;
    this->ShotDir[1] = 180.00f;
    this->ShotDir[2] = 180.00f;
    this->ShotDir[3] = 180.00f;
    this->ShotDir[4] = 180.00f;
    this->DirResetTime = 1.00f;
    this->MoveSpeed0 = 7200.00f;
    this->MoveSpeed1 = 400.00f;
    this->SpdChgStartTime = 0.20f;
    this->SpdChgSweepTime = 0.10f;
    this->SelfDeathTime = 5.00f;
    this->XCheckExplosionTime = 0.15f;
    this->TBS = 0.17f;
    this->TBK = 0.33f;
    this->RBS = 400.00f;
    this->RBK = 800.00f;
    this->APB = 5.00f;
}


