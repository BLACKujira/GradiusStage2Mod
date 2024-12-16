#include "DECAL_DEF_ROWBASE.h"

FDECAL_DEF_ROWBASE::FDECAL_DEF_ROWBASE() {
    this->Condition = EDCOND::DCOND_ALWAYS;
    this->StageId = EStageId::None;
    this->Price = 0;
    this->xDF = false;
}

