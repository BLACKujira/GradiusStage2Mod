#include "L105DataAsset.h"

UL105DataAsset::UL105DataAsset() {
    this->AP = 100.00f;
    this->RL = 150.00f;
    this->RE = 300.00f;
    this->NumForChageUp[0] = 0;
    this->NumForChageUp[1] = 0;
    this->NumForChageUp[2] = 0;
    this->NumForChageUp[3] = 0;
    this->NumForChageUp[4] = 0;
    this->APH[0] = 6.00f;
    this->APH[1] = 6.00f;
    this->APH[2] = 6.00f;
    this->APH[3] = 6.00f;
    this->APH[4] = 6.00f;
    this->APC[0] = 720.00f;
    this->APC[1] = 720.00f;
    this->APC[2] = 720.00f;
    this->APC[3] = 720.00f;
    this->APC[4] = 720.00f;
    this->RLC[0] = 150.00f;
    this->RLC[1] = 150.00f;
    this->RLC[2] = 150.00f;
    this->RLC[3] = 150.00f;
    this->RLC[4] = 150.00f;
    this->REC[0] = 300.00f;
    this->REC[1] = 300.00f;
    this->REC[2] = 300.00f;
    this->REC[3] = 300.00f;
    this->REC[4] = 300.00f;
    this->CLV_MAX[0] = 2;
    this->CLV_MAX[1] = 2;
    this->speed = 18000.00f;
    this->ClostRateForCharge = 0.90f;
    this->SPEED_INI[0] = 0.00f;
    this->SPEED_INI[1] = 0.00f;
    this->SPEED_INI[2] = 0.00f;
    this->SPEED_INI[3] = 0.00f;
    this->SPEED_INI[4] = 0.00f;
    this->T_CRUSISE[0] = 0.00f;
    this->T_CRUSISE[1] = 0.00f;
    this->T_CRUSISE[2] = 0.00f;
    this->T_CRUSISE[3] = 0.00f;
    this->T_CRUSISE[4] = 0.00f;
    this->T_BREAK[0] = 0.00f;
    this->T_BREAK[1] = 0.00f;
    this->T_BREAK[2] = 0.00f;
    this->T_BREAK[3] = 0.00f;
    this->T_BREAK[4] = 0.00f;
    this->TailAlphaTop = 1.00f;
    this->TailAlphaTail = 0.60f;
    this->TailScaleTop = 1.00f;
    this->TailScaleTail = 0.60f;
    this->TailIntervalL = 100.00f;
}


