#include "POBJ_DEF_ROWBASE.h"

FPOBJ_DEF_ROWBASE::FPOBJ_DEF_ROWBASE() {
    this->Condition = EPLCOND::PLCOND_ALWAYS;
    this->Category = EOBJCAT::CAT_FUR;
    this->Male = false;
    this->Count = 0;
    this->Air = false;
    this->Price = 0;
}

