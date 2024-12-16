#include "H062DataAsset.h"

UH062DataAsset::UH062DataAsset() {
    this->Color.AddDefaulted(11);
    this->AP.AddDefaulted(11);
    this->ColA.AddDefaulted(11);
    this->ScreenLimitX = 10500.00f;
    this->ScP.AddDefaulted(11);
    this->ApP.AddDefaulted(7);
    this->HpP.AddDefaulted(7);
    this->NoLandHit.AddDefaulted(7);
    this->P_PreSearchTime = 0.33f;
    this->P_SearchTime = 1.00f;
    this->P_PostSearchTime = 2.00f;
    this->P_SpreadAng = 120.00f;
    this->P_SpreadRadius = 0.00f;
    this->P_MoveSpeed = 12000.00f;
    this->P_SearchRadius = 10000.00f;
    this->P_RotSpeed = 1200.00f;
    this->P_TailPartLife = 0.40f;
}


