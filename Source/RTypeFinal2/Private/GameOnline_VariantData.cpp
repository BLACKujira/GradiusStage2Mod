#include "GameOnline_VariantData.h"

UGameOnline_VariantData::UGameOnline_VariantData() {
}

FString UGameOnline_VariantData::ToString() const {
    return TEXT("");
}

void UGameOnline_VariantData::SetValueUInt8Array(const TArray<uint8>& _in) {
}

void UGameOnline_VariantData::SetValueUInt64(int64 _in) {
}

void UGameOnline_VariantData::SetValueUInt32(int32 _in) {
}

void UGameOnline_VariantData::SetValueString(const FString& _in) {
}

void UGameOnline_VariantData::SetValueInt64(int64 _in) {
}

void UGameOnline_VariantData::SetValueInt32(int32 _in) {
}

void UGameOnline_VariantData::SetValueFloat(float _in) {
}

void UGameOnline_VariantData::SetValueBool(bool _in) {
}

void UGameOnline_VariantData::SetJsonValueFromString(const FString& _in) {
}

bool UGameOnline_VariantData::IsNumeric() const {
    return false;
}

void UGameOnline_VariantData::GetValueUInt8Array(TArray<uint8>& _out) const {
}

void UGameOnline_VariantData::GetValueUInt64(int64& _out) const {
}

void UGameOnline_VariantData::GetValueUInt32(int32& _out) const {
}

void UGameOnline_VariantData::GetValueString(FString& _out) const {
}

void UGameOnline_VariantData::GetValueInt64(int64& _out) const {
}

void UGameOnline_VariantData::GetValueInt32(int32& _out) const {
}

void UGameOnline_VariantData::GetValueFloat(float& _out) const {
}

void UGameOnline_VariantData::GetValueBool(bool& _out) const {
}

FString UGameOnline_VariantData::GetTypeSuffix() const {
    return TEXT("");
}

EGameOnline_OnlineKeyValuePairDataType UGameOnline_VariantData::GetType() const {
    return EGameOnline_OnlineKeyValuePairDataType::Empty;
}

bool UGameOnline_VariantData::FromString(const FString& _newValue) {
    return false;
}

void UGameOnline_VariantData::Empty() {
}


