#include "S7603LaserParam.h"

US7603LaserParam::US7603LaserParam() {
    this->BodyMesh = NULL;
    this->RingMesh = NULL;
    this->SoundBeam = NULL;
    this->WaitBeamSETime = 0.00f;
    this->BeamEffect = NULL;
    this->HitEffect = NULL;
    this->WaitHitEffectTime = 0.00f;
    this->RingEffect = NULL;
    this->RingEffectMoveSpeed = 0.00f;
    this->BeamEndEffect = NULL;
    this->HeadEffect = NULL;
    this->RingKillEffect = NULL;
    this->DeathTime = 0.00f;
    this->BeamScale = 0.00f;
    this->ExtendSpeed = 0.00f;
    this->BeamScaleDownTime = 0.01f;
}


