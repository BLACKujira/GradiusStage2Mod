#include "MEDAL_DEF_ROWBASE.h"

FMEDAL_DEF_ROWBASE::FMEDAL_DEF_ROWBASE() {
    this->ID = EMEDAL_ID::MEDAL_ID_NONE;
    this->rank = EMEDAL_RANK::PMRANK_BRONZE;
    this->Condition = EMCOND::MCOND_ALWAYS;
    this->CondCount = 0;
}

