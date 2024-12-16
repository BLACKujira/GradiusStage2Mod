#include "GhostPlayer.h"

AGhostPlayer::AGhostPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RecordData = NULL;
}


