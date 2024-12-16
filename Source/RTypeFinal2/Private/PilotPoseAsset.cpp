#include "PilotPoseAsset.h"

UPilotPoseAsset::UPilotPoseAsset() {
    this->AnimSeq = NULL;
    this->AnimSeq1 = NULL;
    this->AnimSeq2 = NULL;
    this->AnimSeq3 = NULL;
    this->AnimSeq4 = NULL;
    this->DisableMaleOffset = false;
    this->OffsetHeight = 0.00f;
}

UAnimSequence* UPilotPoseAsset::GetAnimSeqBySuitT(ESUIT_T_ID suitT) {
    return NULL;
}


