#include "HELM_DEF_ROWBASE.h"

FHELM_DEF_ROWBASE::FHELM_DEF_ROWBASE() {
    this->ID = EHELM_ID::HELM_ID_00;
    this->Condition = EPHCOND::PHCOND_ALWAYS;
    this->CondDetail = EBODY_NO::BD_R9A;
    this->Price = 0;
}

