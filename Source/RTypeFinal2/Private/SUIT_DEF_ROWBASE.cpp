#include "SUIT_DEF_ROWBASE.h"

FSUIT_DEF_ROWBASE::FSUIT_DEF_ROWBASE() {
    this->ID = ESUIT_ID::SUIT_ID_00;
    this->Condition = EPSCOND::PSCOND_ALWAYS;
    this->CondDetail = EBODY_NO::BD_R9A;
    this->Price = 0;
}

