#include "MultiplayStageSetting.h"

FMultiplayStageSetting::FMultiplayStageSetting() {
    this->StageId = EStageId::None;
    this->Difficulty = EDifficulty::VERY_EASY;
    this->BodyNo = EBODY_NO::BD_R9A;
    this->ConnectionNum = 0;
}

