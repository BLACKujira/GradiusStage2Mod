#include "UtilEnum.h"

UUtilEnum::UUtilEnum() {
}

int64 UUtilEnum::GetValueByIndex(const FName _enumName, int32 _index) {
    return 0;
}

int32 UUtilEnum::GetNumEnums(const FName _enumName) {
    return 0;
}

FString UUtilEnum::GetNameStringByIndex(const FName _enumName, int32 _index) {
    return TEXT("");
}

FName UUtilEnum::GetNameByIndex(const FName _enumName, int32 _index) {
    return NAME_None;
}

int32 UUtilEnum::GetIndexByValue(const FName _enumName, int64 _value) {
    return 0;
}

int32 UUtilEnum::GetIndexByNameString(const FName _enumName, const FString& _name) {
    return 0;
}

int32 UUtilEnum::GetIndexByName(const FName _enumName, FName _name) {
    return 0;
}


