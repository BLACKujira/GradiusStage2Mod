#include "CountDataTable.h"

FCountDataTable::FCountDataTable() {
    this->Count = 0;
    this->Difficulty = ECountData_Difficulty::NONE;
    this->Level = 0;
    this->Command = ECountData_Command::NOP;
    this->Serial = 0;
    this->PosType = ECountData_PosType::WORLD;
    this->Dir = ECountData_Dir::L_D;
}

