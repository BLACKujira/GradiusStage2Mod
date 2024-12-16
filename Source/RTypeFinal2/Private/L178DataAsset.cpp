#include "L178DataAsset.h"

UL178DataAsset::UL178DataAsset() {
    this->BpActor_Top = NULL;
    this->BpActor_Wave_Lv1 = NULL;
    this->BpActor_Wave_Lv2 = NULL;
    this->BpActor = NULL;
    this->SpeedB = 18000.00f;
    this->HPB = 200.00f;
    this->APB = 200.00f;
    this->COL_RE = 100.00f;
    this->COL_RG = 100.00f;
    this->COL_L = 200.00f;
    this->speed = 15000.00f;
    this->Hp = 500.00f;
    this->HPW = 500.00f;
    this->AP = 500.00f;
    this->APW = 10.00f;
    this->HP2 = 500.00f;
    this->HPW2 = 500.00f;
    this->AP2 = 500.00f;
    this->APW2 = 10.00f;
    this->LINE_RE = 100.00f;
    this->LINE_RG = 100.00f;
    this->CORE_RE = 100.00f;
    this->CORE_RG = 100.00f;
    this->WAVE_TOP_HE = 700.00f;
    this->WAVE_CENTER_HE = 1200.00f;
    this->WAVE_BACK_HE = 700.00f;
    this->WAVE_TOP_HE2 = 700.00f;
    this->WAVE_CENTER_HE2 = 2000.00f;
    this->WAVE_BACK_HE2 = 1000.00f;
    this->HoldTime = 0.50f;
    this->WaveStartTime = 1.00f;
    this->WaveStartTime2 = 1.00f;
    this->WaveInterval = 0.30f;
    this->WaveInterval2 = 0.10f;
}


