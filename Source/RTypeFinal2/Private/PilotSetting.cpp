#include "PilotSetting.h"

FPilotSetting::FPilotSetting() {
    this->SuitID = ESUIT_ID::SUIT_ID_00;
    this->HelmID = EHELM_ID::HELM_ID_00;
    this->PFormID = EPFORM_ID::PFORM_ID_F;
    this->PPoseID = EPPOSE_ID::PPOSE_ID_00;
    this->ClassID = ECLASS_ID::CLASS_ID_00;
    this->TitleID = ETITLE_ID::TITLE_ID_000;
    this->PlayTime = 0;
    this->CustmizeLocked = false;
    this->Gender = EGENDER::GENDER_M;
    this->PilotPosition = 0;
    this->PilotRotation = 0.00f;
    this->FocalDistance = 0.00f;
    this->Camera1FOV = 0.00f;
    this->Camera2FOV = 0.00f;
    this->Camera3FOV = 0.00f;
    this->Background = 0;
}

