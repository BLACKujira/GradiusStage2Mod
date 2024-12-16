#include "S2501_yellowParam.h"

US2501_yellowParam::US2501_yellowParam() {
    this->YellowEffect = NULL;
    this->RedEffect = NULL;
    this->TipEffect = NULL;
    this->TipREffect = NULL;
    this->DeleateEffect = NULL;
    this->DeleateREffect = NULL;
    this->maxLine = 6000.00f;
    this->GunRotateSpeed = 120.00f;
    this->ColBStartLength = 1000.00f;
    this->CoeffBeamColScale = 100.00f;
    this->MinGunRotSpeed = 1.00f;
    this->SpeedDownGunRot = 20.00f;
    this->BeamChargeTime = 1.00f;
    this->BeamThinTime = 0.30f;
    this->DistFromScreenActorXForNoAttack = 10000.00f;
    this->DistFromScreenActorXForStartBeam = 8000.00f;
}


