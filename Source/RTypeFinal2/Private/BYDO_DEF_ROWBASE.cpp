#include "BYDO_DEF_ROWBASE.h"

FBYDO_DEF_ROWBASE::FBYDO_DEF_ROWBASE() {
    this->bConfidential = false;
    this->ReqDestroyCnt = 0;
    this->SortKey = 0;
    this->Standard = EBYDO_STANDARD::None;
    this->Class1 = EBYDO_CLASS1::None;
    this->Class2 = EBYDO_CLASS2::None;
}

