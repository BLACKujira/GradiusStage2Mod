#include "CLASS_DEF_ROWBASE.h"

FCLASS_DEF_ROWBASE::FCLASS_DEF_ROWBASE() {
    this->ID = ECLASS_ID::CLASS_ID_00;
    this->Condition1 = ECCOND::CCOND_ALWAYS;
    this->Condition2 = ECCOND::CCOND_ALWAYS;
    this->Condition3 = ECCOND::CCOND_ALWAYS;
    this->CondDetail1 = 0;
    this->CondDetail2 = 0;
    this->CondDetail3 = 0;
}

