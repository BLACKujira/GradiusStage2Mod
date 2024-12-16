#include "H015DataAsset.h"

UH015DataAsset::UH015DataAsset() {
    this->AP[0] = 50.00f;
    this->AP[1] = 50.00f;
    this->AP[2] = 50.00f;
    this->AP[3] = 50.00f;
    this->AP[4] = 50.00f;
    this->AP[5] = 50.00f;
    this->ColumnNum[0] = 1;
    this->ColumnNum[1] = 1;
    this->ColumnNum[2] = 1;
    this->ColumnNum[3] = 1;
    this->ColumnNum[4] = 1;
    this->ColumnNum[5] = 1;
    this->BubbleNumPerColumn[0] = 4;
    this->BubbleNumPerColumn[1] = 4;
    this->BubbleNumPerColumn[2] = 4;
    this->BubbleNumPerColumn[3] = 4;
    this->BubbleNumPerColumn[4] = 4;
    this->BubbleNumPerColumn[5] = 4;
    this->MaxScale[0] = 0.40f;
    this->MaxScale[1] = 0.40f;
    this->MaxScale[2] = 0.40f;
    this->MaxScale[3] = 0.40f;
    this->MaxScale[4] = 0.40f;
    this->MaxScale[5] = 0.40f;
    this->ScaleUpTime[0] = 1.00f;
    this->ScaleUpTime[1] = 1.00f;
    this->ScaleUpTime[2] = 1.00f;
    this->ScaleUpTime[3] = 1.00f;
    this->ScaleUpTime[4] = 1.00f;
    this->ScaleUpTime[5] = 1.00f;
    this->MinScale[0] = 0.50f;
    this->MinScale[1] = 0.50f;
    this->MinScale[2] = 0.50f;
    this->MinScale[3] = 0.50f;
    this->MinScale[4] = 0.50f;
    this->MinScale[5] = 0.50f;
    this->RapidInterval = 0.05f;
    this->FloatTime = 2.00f;
    this->FloatTime2 = 3.00f;
    this->LRadius = 600.00f;
    this->FRadius = 400.00f;
    this->ERadius = 750.00f;
    this->ScreenBottomBorder = -5500.00f;
}


