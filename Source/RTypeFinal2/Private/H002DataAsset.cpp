#include "H002DataAsset.h"

UH002DataAsset::UH002DataAsset() {
    this->ApCore.AddDefaulted(11);
    this->CollisionRadius.AddDefaulted(11);
    this->GrowT.AddDefaulted(11);
    this->KeepT.AddDefaulted(11);
    this->DecayT.AddDefaulted(11);
    this->AP.AddDefaulted(11);
    this->ApDecay.AddDefaulted(11);
    this->MiniSW_LvSq = NULL;
    this->MiniSW_DelayT = 0.00f;
    this->MiniSW_KeepT = 1.00f;
    this->Color.AddDefaulted(11);
}


