#include "GameMission.h"

UGameMission::UGameMission() {
    this->MissionInfoArray.AddDefaulted(8);
    this->CurrentMissionIndex = 0;
}

void UGameMission::SetStageId(int32 _missionIndex, EStageId _stageId, int32 _gateNo) {
}

void UGameMission::SetNextStageId(EStageId _stageId, int32 _gateNo) {
}

void UGameMission::SetCurrentMissionIndex(int32 _index) {
}

void UGameMission::ResetMissionInfo() {
}

EStageId UGameMission::GetStageId(int32 _missionIndex) const {
    return EStageId::None;
}

bool UGameMission::GetNextStageId(EStageId& _stageId, int32& _gateNo) {
    return false;
}

int32 UGameMission::GetMissionNo(int32 _missionIndex) const {
    return 0;
}

bool UGameMission::GetMissionInfo(FMissionInfo& _outInfo, int32 _missionIndex) const {
    return false;
}

int32 UGameMission::GetMissionIndexMax() {
    return 0;
}

int32 UGameMission::GetGateNo(int32 _missionIndex) const {
    return 0;
}

EStageId UGameMission::GetCurrentStageId() const {
    return EStageId::None;
}

int32 UGameMission::GetCurrentMissionNo() const {
    return 0;
}

bool UGameMission::GetCurrentMissionInfo(FMissionInfo& _outInfo) const {
    return false;
}

int32 UGameMission::GetCurrentMissionIndex() const {
    return 0;
}

int32 UGameMission::GetCurrentGateNo() const {
    return 0;
}

void UGameMission::AddMissionIndex() {
}


