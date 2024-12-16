#include "StageList.h"

FStageList::FStageList() {
    this->ID = EStageId::None;
    this->IsDevelope = false;
    this->IsFinalStage = false;
    this->IsCourseEdit = false;
    this->CourseEditSortNo = 0;
    this->ChunkID = 0;
    this->ResourceA = 0;
    this->ResourceB = 0;
    this->ResourceC = 0;
    this->IsCompetitionStage = false;
    this->CompStageId = ECompStageId::None;
}

