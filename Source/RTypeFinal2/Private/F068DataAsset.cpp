#include "F068DataAsset.h"

UF068DataAsset::UF068DataAsset() {
    this->AttackBias = 1.00f;
    this->BskMoveSpd = 15000.00f;
    this->BskRotSpd = 600.00f;
    this->BskMoveTime = 0.33f;
    this->BskRotTime = 0.33f;
    this->GhostMaxNum = 32;
    this->GhostLifeTime = 0.13f;
    this->GhostLifeTimeDS = 0.27f;
    this->GhostAlphaS = 0.70f;
    this->GhostAlphaSSE = 0.60f;
    this->GhostAlphaSX = 0.30f;
    this->GhostAlphaE = 0.10f;
    this->GhostInterval = 0.02f;
    this->GhostIntervalSE = 0.03f;
    this->GhostIntervalX = 0.07f;
    this->GhostAps = 120.00f;
    this->GhostApsDS = 240.00f;
    this->GhostAR = 400.00f;
    this->GMesh.AddDefaulted(3);
    this->GMeshDS.AddDefaulted(3);
}


