#include "RecordStage.h"

FRecordStage::FRecordStage() {
    this->StageId = EStageId::None;
    this->PlayCount = 0;
    this->ReplayCount = 0;
    this->ClearCount = 0;
    this->FirstClearBody = EBODY_NO::BD_R9A;
    this->FirstClearDifficulty = EDifficulty::VERY_EASY;
    this->ClearDifficultyFlags = EDifficultyBits::None;
    this->StageScore = 0;
    this->MaxClearBonus = 0.00f;
}

