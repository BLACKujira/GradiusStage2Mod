#include "StageBgmCompetition.h"

AStageBgmCompetition::AStageBgmCompetition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SeChangeJingle = NULL;
    this->TimerGameStart = 0.00f;
    this->NextBgmCue = NULL;
    this->AudioJingle = NULL;
    this->BgmPlayingTimeMinimum = 10.00f;
    this->BgmPlayingTimer = 0.00f;
    this->BgmChangeJingleDelayTime = 5.00f;
    this->BgmChangeFadeoutTime = 3.00f;
    this->BgmChangePlayNextBgmWaitTime = 2.00f;
    this->Exception1Time = 60.00f;
    this->Exception2TimeStart = 60.00f;
    this->Exception2TimeEnd = 120.00f;
    this->Exception3TimeStart = 120.00f;
    this->Exception3TimeEnd = 180.00f;
    this->Exception4TimeStart = 180.00f;
    this->Exception4TimeEnd = 240.00f;
}

void AStageBgmCompetition::OnGameStart() {
}


