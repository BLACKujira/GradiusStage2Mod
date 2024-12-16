#include "BS022_TentacleParam.h"

UBS022_TentacleParam::UBS022_TentacleParam() {
    this->Defence = 0;
    this->Score = 0;
    this->BodyMesh = NULL;
    this->BodyAnimBP = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->DeathTime = 0.00f;
    this->MaxStartDistanceOnSpline = 20000.00f;
    this->bSplineAllowSplineEditingPerInstance = false;
    this->SplineReparamStepsPerSegment = 1;
    this->SplineDuration = 1000000000.00f;
    this->MCPMoveWidth = 1200.00f;
    this->MCPMoveWidth_Min = 700.00f;
    this->MCPMoveSpeed = 2000.00f;
    this->MCPMoveSpeed_Min = 1000.00f;
    this->MinPointLocationZ_Tentacle_1 = -9000.00f;
    this->MinPointLocationZ_Tentacle_2 = -12000.00f;
    this->MinPointLocationZ_Tentacle_3 = -17000.00f;
    this->RetreatStartDelay = 0.00f;
    this->test_offsetTentY = 0.00f;
    this->test_value = 0.00f;
    this->TentacleBoneThinningOutMode = 2;
}


