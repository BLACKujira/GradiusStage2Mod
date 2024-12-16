#include "H042DataAsset.h"

UH042DataAsset::UH042DataAsset() {
    this->ApP.AddDefaulted(3);
    this->HpP.AddDefaulted(3);
    this->P_PreSearchTime = 0.33f;
    this->P_SearchTime = 1.00f;
    this->P_PostSearchTime = 2.00f;
    this->P_SpreadAng = 120.00f;
    this->P_SpreadRadius = 0.00f;
    this->P_MoveSpeed = 12000.00f;
    this->P_SearchRadius = 10000.00f;
    this->P_RotSpeed = 1200.00f;
}


