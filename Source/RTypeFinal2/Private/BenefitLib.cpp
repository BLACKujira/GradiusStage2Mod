#include "BenefitLib.h"

UBenefitLib::UBenefitLib() {
}

void UBenefitLib::SaveCF(UObject* _wco, const ECFId _cfid, const FString& _password) {
}

bool UBenefitLib::IsGetEnableCFId(UObject* _wco, ECFId _cfid) {
    return false;
}

TArray<ECFId> UBenefitLib::GetEnableCFId(UObject* _wco) {
    return TArray<ECFId>();
}

ECFId UBenefitLib::CheckPasswordCF(UObject* _wco, const ECFType _type, const FString& _password) {
    return ECFId::None;
}

bool UBenefitLib::CheckCollectPasswordCF(UObject* _wco, const FSafeString& _password) {
    return false;
}

void UBenefitLib::CallUnlockFunc(UObject* _wco, const ECFId _cfid) {
}


