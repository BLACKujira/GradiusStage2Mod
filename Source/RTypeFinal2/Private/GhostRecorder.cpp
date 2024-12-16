#include "GhostRecorder.h"

AGhostRecorder::AGhostRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RecordData = NULL;
    this->TargetActor = NULL;
    this->bCurrentActive = false;
    this->bRecordActive = false;
    this->Target = EGhostRecorder_Target::AIRCRAFT;
    this->Phase = EGhostRecorder_Phase::IDLE;
}


