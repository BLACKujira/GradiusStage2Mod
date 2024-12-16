#include "H051DataAsset.h"

UH051DataAsset::UH051DataAsset() {
    this->A_Radius.AddDefaulted(11);
    this->B_Radius.AddDefaulted(11);
    this->B_Frame.AddDefaulted(11);
    this->CamaraShakeS = NULL;
    this->CamaraShakeM = NULL;
    this->CamaraShakeL = NULL;
}


