#include "PSInputFunctionLibrary.h"

UPSInputFunctionLibrary::UPSInputFunctionLibrary() {
}

bool UPSInputFunctionLibrary::UpdateActionMapping(const FString& ActionName, const FKey NewInputKey, const EPSInputType InputType) {
    return false;
}

void UPSInputFunctionLibrary::GetAllActionMappingName(TArray<FPSInputWrapper>& InputArray) {
}

void UPSInputFunctionLibrary::FindCurrentActionMappings(const FString& ActionName, TArray<FPSInputWrapper>& InputArray) {
}

void UPSInputFunctionLibrary::FindCurrentActionMapping(const FString& ActionName, FPSInputWrapper& Input, const EPSInputType InputType) {
}


