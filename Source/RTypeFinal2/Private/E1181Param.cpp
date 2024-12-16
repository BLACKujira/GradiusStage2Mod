#include "E1181Param.h"

UE1181Param::UE1181Param() {
    this->Defence = 0;
    this->Score = 100;
    this->PartsScore = 0;
    this->Effect[0] = NULL;
    this->Effect[1] = NULL;
    this->Effect[2] = NULL;
    this->Effect[3] = NULL;
    this->MoveLookAtDistance = 0.00f;
    this->HeadReadyTime = 0.00f;
    this->HeadParam = NULL;
    this->HipParam = NULL;
    this->SearchTimeout = 60.00f;
}


