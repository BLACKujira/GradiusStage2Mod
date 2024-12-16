#include "UtilDataTable.h"

UUtilDataTable::UUtilDataTable() {
}

bool UUtilDataTable::Reimport(UDataTable* _dataTable) {
    return false;
}

FString UUtilDataTable::GetSourceFile(UDataTable* _dataTable) {
    return TEXT("");
}

FName UUtilDataTable::GetRowStructName(UDataTable* _dataTable) {
    return NAME_None;
}


