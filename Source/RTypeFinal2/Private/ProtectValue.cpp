#include "ProtectValue.h"

UProtectValue::UProtectValue() {
}

int32 UProtectValue::ValueSetInt32_WithSeed(FProtectValueInt32& _protectValue, int64 _seed, int32 _value) {
    return 0;
}

int32 UProtectValue::ValueSetInt32(FProtectValueInt32& _protectValue, int32 _value) {
    return 0;
}

int32 UProtectValue::ValueGetInt32(const FProtectValueInt32& _protectValue) {
    return 0;
}

void UProtectValue::DataSetValueInt32(FProtectDataInt32& _protectData, const FProtectValueInt32& _protectValue) {
}

void UProtectValue::DataSave(FProtectDataInt32& _protectData) {
}

bool UProtectValue::DataIsValid(const FProtectDataInt32& _protectData) {
    return false;
}

FProtectValueInt32 UProtectValue::DataGetValueInt32(const FProtectDataInt32& _protectData) {
    return FProtectValueInt32{};
}


