#include "POBJ_DEF.h"

FPOBJ_DEF::FPOBJ_DEF() {
    this->Condition = EPLCOND::PLCOND_ALWAYS;
    this->Category = EOBJCAT::CAT_FUR;
    this->Male = false;
    this->Count = 0;
    this->Air = false;
    this->Price = 0;
}

