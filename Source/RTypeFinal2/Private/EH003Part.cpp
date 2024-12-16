#include "EH003Part.h"

FEH003Part::FEH003Part() {
    this->Length = 0.00f;
    this->Ang = 0.00f;
    this->Used = false;
    this->PastTime = 0.00f;
    this->MaxTime = 0.00f;
    this->NsBody = NULL;
    this->StBody = NULL;
    this->MiBody = NULL;
}

