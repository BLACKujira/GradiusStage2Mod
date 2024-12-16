#include "L195SvData.h"

FL195SvData::FL195SvData() {
    this->AP = 0.00f;
    this->AP2 = 0.00f;
    this->RL = 0.00f;
    this->RE = 0.00f;
    this->GHitChkXOnForce = 0.00f;
    this->GrowthRatePerPush = 0.00f;
    this->MinHoldTime = 0.00f;
    this->BeamExpandTime = 0.00f;
    this->BeamShrinkTime = 0.00f;
    this->MinBeamRate = 0.00f;
    this->DmgBeamRate = 0.00f;
    this->TailDT = 0.00f;
    this->HitEffIntervalT = 0.00f;
    this->bone = NULL;
    this->bone_abp = NULL;
    this->part = NULL;
    this->Tail = NULL;
    this->effBase = NULL;
    this->effHit = NULL;
    this->effHitE = NULL;
    this->APB = 0.00f;
    this->APB2 = 0.00f;
    this->RB = 0.00f;
    this->RB2 = 0.00f;
}

