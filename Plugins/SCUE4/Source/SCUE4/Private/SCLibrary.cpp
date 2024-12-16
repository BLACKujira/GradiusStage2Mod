#include "SCLibrary.h"

USCLibrary::USCLibrary() {
}

FVector4 USCLibrary::SCO_Pure_SetVector4DEqualFSV(FVector4& NV, FSafeVector4D& FSV) {
    return FVector4{};
}

FVector USCLibrary::SCO_Pure_SetVector3DEqualFSV(FVector& NV, FSafeVector3D& FSV) {
    return FVector{};
}

FVector2D USCLibrary::SCO_Pure_SetVector2DEqualFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return FVector2D{};
}

FTransform USCLibrary::SCO_Pure_SetTransformEqualFST(FTransform& NT, FSafeTransform& FST) {
    return FTransform{};
}

FText USCLibrary::SCO_Pure_SetTextEqualFST(FText& NT, FSafeText& FST) {
    return FText::GetEmpty();
}

FString USCLibrary::SCO_Pure_SetStringEqualFSS(FString& NS, FSafeString& FSS) {
    return TEXT("");
}

FSafeVector4D USCLibrary::SCO_Pure_SetSafeVector4DEqualVector4D(FSafeVector4D& FSV, FVector4& NV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector4D USCLibrary::SCO_Pure_SetSafeVector4DEqualFSV(FSafeVector4D& FSV, FSafeVector4D& SSV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualVector3D(FSafeVector3D& FSV, FVector& NV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualFSV(FSafeVector3D& FSV, FSafeVector3D& SSV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualVector2D(FSafeVector2D& FSV, FVector2D& NV, FVector2D& Output) {
    return FSafeVector2D{};
}

FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualFSV(FSafeVector2D& FSV, FSafeVector2D& SSV, FVector2D& Output) {
    return FSafeVector2D{};
}

FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualTransform(FSafeTransform& FST, FTransform& SST, FTransform& Output) {
    return FSafeTransform{};
}

FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualFST(FSafeTransform& FST, FSafeTransform& SST, FTransform& Output) {
    return FSafeTransform{};
}

FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualText(FSafeText& FST, FText& NT, FText& Output) {
    return FSafeText{};
}

FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualFST(FSafeText& FST, FSafeText& ST, FText& Output) {
    return FSafeText{};
}

FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualString(FSafeString& FSS, FString& NS, FString& Output) {
    return FSafeString{};
}

FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualFSS(FSafeString& FSS, FSafeString& SS, FString& Output) {
    return FSafeString{};
}

FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualRotator(FSafeRotator& FSR, FRotator& NR, FRotator& Output) {
    return FSafeRotator{};
}

FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualFSR(FSafeRotator& FSR, FSafeRotator& SSR, FRotator& Output) {
    return FSafeRotator{};
}

FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualName(FSafeName& FSN, FName& NN, FName& Output) {
    return FSafeName{};
}

FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualFSN(FSafeName& FSN, FSafeName& SSN, FName& Output) {
    return FSafeName{};
}

FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFSF(FSafeFloat& FSF, FSafeFloat& SSF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFloat(FSafeFloat& FSF, float& NF, float& Output) {
    return FSafeFloat{};
}

FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualFSC(FSafeColor& FSC, FSafeColor& SSC, FLinearColor& Output) {
    return FSafeColor{};
}

FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualColor(FSafeColor& FSC, FLinearColor& SSC, FLinearColor& Output) {
    return FSafeColor{};
}

FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualFSB(FSafeBool& FSB, FSafeBool& SSB, bool& Output) {
    return FSafeBool{};
}

FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualBool(FSafeBool& FSB, bool& NB, bool& Output) {
    return FSafeBool{};
}

FRotator USCLibrary::SCO_Pure_SetRotatorEqualFSR(FRotator& NR, FSafeRotator& FSR) {
    return FRotator{};
}

FName USCLibrary::SCO_Pure_SetNameEqualFSN(FName& NN, FSafeName& FSN) {
    return NAME_None;
}

int32 USCLibrary::SCO_Pure_SetIntEqualFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

float USCLibrary::SCO_Pure_SetFloatEqualFSF(float& NF, FSafeFloat& FSF) {
    return 0.0f;
}

FLinearColor USCLibrary::SCO_Pure_SetColorEqualFSC(FLinearColor& NC, FSafeColor& FSC) {
    return FLinearColor{};
}

uint8 USCLibrary::SCO_Pure_SetByteEqualFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

bool USCLibrary::SCO_Pure_SetBoolEqualFSB(bool& NB, FSafeBool& FSB) {
    return false;
}

FVector4 USCLibrary::SCO_Pure_GetVector4DTimesFSV(FVector4& NV, FSafeVector4D& FSV) {
    return FVector4{};
}

bool USCLibrary::SCO_Pure_GetVector4DSmallerFSV(FVector4& NV, FSafeVector4D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector4DSmallerEqualFSV(FVector4& NV, FSafeVector4D& FSV) {
    return false;
}

FVector4 USCLibrary::SCO_Pure_GetVector4DPlusFSV(FVector4& NV, FSafeVector4D& FSV) {
    return FVector4{};
}

bool USCLibrary::SCO_Pure_GetVector4DNotEqualFSV(FVector4& NV, FSafeVector4D& FSV) {
    return false;
}

FVector4 USCLibrary::SCO_Pure_GetVector4DModFSV(FVector4& NV, FSafeVector4D& FSV) {
    return FVector4{};
}

FVector4 USCLibrary::SCO_Pure_GetVector4DMinusFSV(FVector4& NV, FSafeVector4D& FSV) {
    return FVector4{};
}

bool USCLibrary::SCO_Pure_GetVector4DGreaterFSV(FVector4& NV, FSafeVector4D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector4DGreaterEqualFSV(FVector4& NV, FSafeVector4D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector4DEqualFSV(FVector4& NV, FSafeVector4D& FSV) {
    return false;
}

FVector4 USCLibrary::SCO_Pure_GetVector4DDivideFSV(FVector4& NV, FSafeVector4D& FSV) {
    return FVector4{};
}

FVector USCLibrary::SCO_Pure_GetVector3DTimesFSV(FVector& NV, FSafeVector3D& FSV) {
    return FVector{};
}

bool USCLibrary::SCO_Pure_GetVector3DSmallerFSV(FVector& NV, FSafeVector3D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector3DSmallerEqualFSV(FVector& NV, FSafeVector3D& FSV) {
    return false;
}

FVector USCLibrary::SCO_Pure_GetVector3DPlusFSV(FVector& NV, FSafeVector3D& FSV) {
    return FVector{};
}

bool USCLibrary::SCO_Pure_GetVector3DNotEqualFSV(FVector& NV, FSafeVector3D& FSV) {
    return false;
}

FVector USCLibrary::SCO_Pure_GetVector3DModFSV(FVector& NV, FSafeVector3D& FSV) {
    return FVector{};
}

FVector USCLibrary::SCO_Pure_GetVector3DMinusFSV(FVector& NV, FSafeVector3D& FSV) {
    return FVector{};
}

bool USCLibrary::SCO_Pure_GetVector3DGreaterFSV(FVector& NV, FSafeVector3D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector3DGreaterEqualFSV(FVector& NV, FSafeVector3D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector3DEqualFSV(FVector& NV, FSafeVector3D& FSV) {
    return false;
}

FVector USCLibrary::SCO_Pure_GetVector3DDivideFSV(FVector& NV, FSafeVector3D& FSV) {
    return FVector{};
}

FVector2D USCLibrary::SCO_Pure_GetVector2DTimesFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return FVector2D{};
}

bool USCLibrary::SCO_Pure_GetVector2DSmallerFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector2DSmallerEqualFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return false;
}

FVector2D USCLibrary::SCO_Pure_GetVector2DPlusFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return FVector2D{};
}

bool USCLibrary::SCO_Pure_GetVector2DNotEqualFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return false;
}

FVector2D USCLibrary::SCO_Pure_GetVector2DModFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return FVector2D{};
}

FVector2D USCLibrary::SCO_Pure_GetVector2DMinusFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return FVector2D{};
}

bool USCLibrary::SCO_Pure_GetVector2DGreaterFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector2DGreaterEqualFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetVector2DEqualFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return false;
}

FVector2D USCLibrary::SCO_Pure_GetVector2DDivideFSV(FVector2D& NV, FSafeVector2D& FSV) {
    return FVector2D{};
}

bool USCLibrary::SCO_Pure_GetTransformNotEqualFST(FTransform& NT, FSafeTransform& FST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetTransformEqualFST(FTransform& NT, FSafeTransform& FST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetTextSmallerFST(FText& NT, FSafeText& FST) {
    return false;
}

FText USCLibrary::SCO_Pure_GetTextPlusFST(FText& NT, FSafeText& FST) {
    return FText::GetEmpty();
}

bool USCLibrary::SCO_Pure_GetTextNotEqualFST(FText& NT, FSafeText& FST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetTextGreaterFST(FText& NT, FSafeText& FST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetTextEqualFST(FText& NT, FSafeText& FST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetStringSmallerFSS(FString& NS, FSafeString& FSS) {
    return false;
}

FString USCLibrary::SCO_Pure_GetStringPlusFSS(FString& NS, FSafeString& FSS) {
    return TEXT("");
}

bool USCLibrary::SCO_Pure_GetStringNotEqualFSS(FString& NS, FSafeString& FSS) {
    return false;
}

bool USCLibrary::SCO_Pure_GetStringGreaterFSS(FString& NS, FSafeString& FSS) {
    return false;
}

bool USCLibrary::SCO_Pure_GetStringEqualFSS(FString& NS, FSafeString& FSS) {
    return false;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DTimesVector4D(FSafeVector4D& FSV, FVector4& NV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DTimesFSV(FSafeVector4D& FSV, FSafeVector4D& SSV, FVector4& Output) {
    return FSafeVector4D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerVector4D(FSafeVector4D& FSV, FVector4& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerFSV(FSafeVector4D& FSV, FSafeVector4D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualVector4D(FSafeVector4D& FSV, FVector4& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualFSV(FSafeVector4D& FSV, FSafeVector4D& SSV) {
    return false;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusVector4D(FSafeVector4D& FSV, FVector4& NV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusFSV(FSafeVector4D& FSV, FSafeVector4D& SSV, FVector4& Output) {
    return FSafeVector4D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector4DNotEqualVector4D(FSafeVector4D& FSV, FVector4& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DNotEqualFSV(FSafeVector4D& FSV, FSafeVector4D& SSV) {
    return false;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DModVector4D(FSafeVector4D& FSV, FVector4& NV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DModFSV(FSafeVector4D& FSV, FSafeVector4D& SSV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusVector4D(FSafeVector4D& FSV, FVector4& NV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusFSV(FSafeVector4D& FSV, FSafeVector4D& SSV, FVector4& Output) {
    return FSafeVector4D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterVector4D(FSafeVector4D& FSV, FVector4& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterFSV(FSafeVector4D& FSV, FSafeVector4D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualVector4D(FSafeVector4D& FSV, FVector4& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualFSV(FSafeVector4D& FSV, FSafeVector4D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DEqualVector4D(FSafeVector4D& FSV, FVector4& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector4DEqualFSV(FSafeVector4D& FSV, FSafeVector4D& SSV) {
    return false;
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDivideVector4D(FSafeVector4D& FSV, FVector4& NV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDivideFSV(FSafeVector4D& FSV, FSafeVector4D& SSV, FVector4& Output) {
    return FSafeVector4D{};
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesVector3D(FSafeVector3D& FSV, FVector& NV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesFSV(FSafeVector3D& FSV, FSafeVector3D& SSV, FVector& Output) {
    return FSafeVector3D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerVector3D(FSafeVector3D& FSV, FVector& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerFSV(FSafeVector3D& FSV, FSafeVector3D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualVector3D(FSafeVector3D& FSV, FVector& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualFSV(FSafeVector3D& FSV, FSafeVector3D& SSV) {
    return false;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusVector3D(FSafeVector3D& FSV, FVector& NV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusFSV(FSafeVector3D& FSV, FSafeVector3D& SSV, FVector& Output) {
    return FSafeVector3D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualVector3D(FSafeVector3D& FSV, FVector& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualFSV(FSafeVector3D& FSV, FSafeVector3D& SSV) {
    return false;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DModVector3D(FSafeVector3D& FSV, FVector& NV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DModFSV(FSafeVector3D& FSV, FSafeVector3D& SSV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusVector3D(FSafeVector3D& FSV, FVector& NV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusFSV(FSafeVector3D& FSV, FSafeVector3D& SSV, FVector& Output) {
    return FSafeVector3D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterVector3D(FSafeVector3D& FSV, FVector& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterFSV(FSafeVector3D& FSV, FSafeVector3D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualVector3D(FSafeVector3D& FSV, FVector& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualFSV(FSafeVector3D& FSV, FSafeVector3D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DEqualVector3D(FSafeVector3D& FSV, FVector& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector3DEqualFSV(FSafeVector3D& FSV, FSafeVector3D& SSV) {
    return false;
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideVector3D(FSafeVector3D& FSV, FVector& NV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideFSV(FSafeVector3D& FSV, FSafeVector3D& SSV, FVector& Output) {
    return FSafeVector3D{};
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesVector2D(FSafeVector2D& FSV, FVector2D& NV, FVector2D& Output) {
    return FSafeVector2D{};
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesFSV(FSafeVector2D& FSV, FSafeVector2D& SSV, FVector2D& Output) {
    return FSafeVector2D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerVector2D(FSafeVector2D& FSV, FVector2D& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerFSV(FSafeVector2D& FSV, FSafeVector2D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualVector2D(FSafeVector2D& FSV, FVector2D& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualFSV(FSafeVector2D& FSV, FSafeVector2D& SSV) {
    return false;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusVector2D(FSafeVector2D& FSV, FVector2D& NV, FVector2D& Output) {
    return FSafeVector2D{};
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusFSV(FSafeVector2D& FSV, FSafeVector2D& SSV, FVector2D& Output) {
    return FSafeVector2D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualVector2D(FSafeVector2D& FSV, FVector2D& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualFSV(FSafeVector2D& FSV, FSafeVector2D& SSV) {
    return false;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DModVector2D(FSafeVector2D& FSV, FVector2D& NV, FVector2D& Output) {
    return FSafeVector2D{};
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DModFSV(FSafeVector2D& FSV, FSafeVector2D& SSV, FVector2D& Output) {
    return FSafeVector2D{};
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusVector2D(FSafeVector2D& FSV, FVector2D& NV, FVector2D& Output) {
    return FSafeVector2D{};
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusFSV(FSafeVector2D& FSV, FSafeVector2D& SSV, FVector2D& Output) {
    return FSafeVector2D{};
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterVector2D(FSafeVector2D& FSV, FVector2D& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterFSV(FSafeVector2D& FSV, FSafeVector2D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualVector2D(FSafeVector2D& FSV, FVector2D& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualFSV(FSafeVector2D& FSV, FSafeVector2D& SSV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DEqualVector2D(FSafeVector2D& FSV, FVector2D& NV) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeVector2DEqualFSV(FSafeVector2D& FSV, FSafeVector2D& SSV) {
    return false;
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideVector2D(FSafeVector2D& FSV, FVector2D& NV, FVector2D& Output) {
    return FSafeVector2D{};
}

FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideFSV(FSafeVector2D& FSV, FSafeVector2D& SSV, FVector2D& Output) {
    return FSafeVector2D{};
}

bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualTransform(FSafeTransform& FST, FTransform& NT) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualFST(FSafeTransform& FST, FSafeTransform& SST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTransformEqualTransform(FSafeTransform& FST, FTransform& NT) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTransformEqualFST(FSafeTransform& FST, FSafeTransform& SST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTextSmallerText(FSafeText& FST, FText& NT) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTextSmallerFST(FSafeText& FST, FSafeText& ST) {
    return false;
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusText(FSafeText& FST, FText& NT, FText& Output) {
    return FSafeText{};
}

FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusFST(FSafeText& FST, FSafeText& ST, FText& Output) {
    return FSafeText{};
}

bool USCLibrary::SCO_Pure_GetSafeTextNotEqualText(FSafeText& FST, FText& NT) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTextNotEqualFST(FSafeText& FST, FSafeText& ST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTextGreaterText(FSafeText& FST, FText& NT) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTextGreaterFST(FSafeText& FST, FSafeText& ST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTextEqualText(FSafeText& FST, FText& NT) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeTextEqualFST(FSafeText& FST, FSafeText& ST) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeStringSmallerString(FSafeString& FSS, FString& NS) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeStringSmallerFSS(FSafeString& FSS, FSafeString& SS) {
    return false;
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusString(FSafeString& FSS, FString& NS, FString& Output) {
    return FSafeString{};
}

FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusFSS(FSafeString& FSS, FSafeString& SS, FString& Output) {
    return FSafeString{};
}

bool USCLibrary::SCO_Pure_GetSafeStringNotEqualString(FSafeString& FSS, FString& NS) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeStringNotEqualFSS(FSafeString& FSS, FSafeString& SS) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeStringGreaterString(FSafeString& FSS, FString& NS) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeStringGreaterFSS(FSafeString& FSS, FSafeString& SS) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeStringEqualString(FSafeString& FSS, FString& NS) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeStringEqualFSS(FSafeString& FSS, FSafeString& SS) {
    return false;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorTimesRotator(FSafeRotator& FSR, FRotator& NR, FRotator& Output) {
    return FSafeRotator{};
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorTimesFSR(FSafeRotator& FSR, FSafeRotator& SSR, FRotator& Output) {
    return FSafeRotator{};
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerRotator(FSafeRotator& FSR, FRotator& NR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerFSR(FSafeRotator& FSR, FSafeRotator& SSR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualRotator(FSafeRotator& FSR, FRotator& NR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualFSR(FSafeRotator& FSR, FSafeRotator& SSR) {
    return false;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusRotator(FSafeRotator& FSR, FRotator& NR, FRotator& Output) {
    return FSafeRotator{};
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusFSR(FSafeRotator& FSR, FSafeRotator& SSR, FRotator& Output) {
    return FSafeRotator{};
}

bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualRotator(FSafeRotator& FSR, FRotator& NR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualFSR(FSafeRotator& FSR, FSafeRotator& SSR) {
    return false;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorModRotator(FSafeRotator& FSR, FRotator& NR, FRotator& Output) {
    return FSafeRotator{};
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorModFSR(FSafeRotator& FSR, FSafeRotator& SSR, FRotator& Output) {
    return FSafeRotator{};
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusRotator(FSafeRotator& FSR, FRotator& NR, FRotator& Output) {
    return FSafeRotator{};
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusFSR(FSafeRotator& FSR, FSafeRotator& SSR, FRotator& Output) {
    return FSafeRotator{};
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterRotator(FSafeRotator& FSR, FRotator& NR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterFSR(FSafeRotator& FSR, FSafeRotator& SSR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualRotator(FSafeRotator& FSR, FRotator& NR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualFSR(FSafeRotator& FSR, FSafeRotator& SSR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorEqualRotator(FSafeRotator& FSR, FRotator& NR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeRotatorEqualFSR(FSafeRotator& FSR, FSafeRotator& SSR) {
    return false;
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDivideRotator(FSafeRotator& FSR, FRotator& NR, FRotator& Output) {
    return FSafeRotator{};
}

FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDivideFSR(FSafeRotator& FSR, FSafeRotator& SSR, FRotator& Output) {
    return FSafeRotator{};
}

bool USCLibrary::SCO_Pure_GetSafeNameSmallerName(FSafeName& FSN, FName& NN) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeNameSmallerFSN(FSafeName& FSN, FSafeName& SSN) {
    return false;
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusName(FSafeName& FSN, FName& NN, FName& Output) {
    return FSafeName{};
}

FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusFSN(FSafeName& FSN, FSafeName& SSN, FName& Output) {
    return FSafeName{};
}

bool USCLibrary::SCO_Pure_GetSafeNameNotEqualName(FSafeName& FSN, FName& NN) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeNameNotEqualFSN(FSafeName& FSN, FSafeName& SSN) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeNameGreaterName(FSafeName& FSN, FName& NN) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeNameGreaterFSN(FSafeName& FSN, FSafeName& SSN) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeNameEqualName(FSafeName& FSN, FName& NN) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeNameEqualFSN(FSafeName& FSN, FSafeName& SSN) {
    return false;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerInt(FSafeInt& FSI, int32& NI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerFSI(FSafeInt& FSI, FSafeInt& SSI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualInt(FSafeInt& FSI, int32& NI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualFSI(FSafeInt& FSI, FSafeInt& SSI) {
    return false;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotInt(int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotFSI(FSafeInt& FSI, int32& Output) {
    return FSafeInt{};
}

bool USCLibrary::SCO_Pure_GetSafeIntNotEqualInt(FSafeInt& FSI, int32& NI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntNotEqualFSI(FSafeInt& FSI, FSafeInt& SSI) {
    return false;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntModInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntModFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntIncreaseFSI(FSafeInt& FSI, int32& Output) {
    return FSafeInt{};
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterInt(FSafeInt& FSI, int32& NI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterFSI(FSafeInt& FSI, FSafeInt& SSI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualInt(FSafeInt& FSI, int32& NI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualFSI(FSafeInt& FSI, FSafeInt& SSI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntEqualInt(FSafeInt& FSI, int32& NI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeIntEqualFSI(FSafeInt& FSI, FSafeInt& SSI) {
    return false;
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntDecreaseFSI(FSafeInt& FSI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndInt(FSafeInt& FSI, int32& NI, int32& Output) {
    return FSafeInt{};
}

FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndFSI(FSafeInt& FSI, FSafeInt& SSI, int32& Output) {
    return FSafeInt{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFSF(FSafeFloat& FSF, FSafeFloat& SSF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFloat(FSafeFloat& FSF, float& NF, float& Output) {
    return FSafeFloat{};
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFSF(FSafeFloat& FSF, FSafeFloat& SSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFloat(FSafeFloat& FSF, float& NF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFSF(FSafeFloat& FSF, FSafeFloat& SSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFloat(FSafeFloat& FSF, float& NF) {
    return false;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFSF(FSafeFloat& FSF, FSafeFloat& SSF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFloat(FSafeFloat& FSF, float& NF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFSF(FSafeFloat& FSF, FSafeFloat& SSF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFloat(FSafeFloat& FSF, float& NF, float& Output) {
    return FSafeFloat{};
}

bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFSF(FSafeFloat& FSF, FSafeFloat& SSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFloat(FSafeFloat& FSF, float& NF) {
    return false;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatModFSF(FSafeFloat& FSF, FSafeFloat& SSF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatModFloat(FSafeFloat& FSF, float& NF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFSF(FSafeFloat& FSF, FSafeFloat& SSF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFloat(FSafeFloat& FSF, float& NF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFSF(FSafeFloat& FSF, FSafeFloat& SSF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFloat(FSafeFloat& FSF, float& NF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatIncreaseFSF(FSafeFloat& FSF, float& Output) {
    return FSafeFloat{};
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFSF(FSafeFloat& FSF, FSafeFloat& SSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFloat(FSafeFloat& FSF, float& NF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFSF(FSafeFloat& FSF, FSafeFloat& SSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFloat(FSafeFloat& FSF, float& NF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatEqualFSF(FSafeFloat& FSF, FSafeFloat& SSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeFloatEqualFloat(FSafeFloat& FSF, float& NF) {
    return false;
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFSF(FSafeFloat& FSF, FSafeFloat& SSF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFloat(FSafeFloat& FSF, float& NF, float& Output) {
    return FSafeFloat{};
}

FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDecreaseFSF(FSafeFloat& FSF, float& Output) {
    return FSafeFloat{};
}

bool USCLibrary::SCO_Pure_GetSafeColorNotEqualFSC(FSafeColor& FSC, FSafeColor& SSC) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeColorNotEqualColor(FSafeColor& FSC, FLinearColor& NC) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeColorEqualFSC(FSafeColor& FSC, FSafeColor& SSC) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeColorEqualColor(FSafeColor& FSC, FLinearColor& NC) {
    return false;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerFSB(FSafeByte& FSB, FSafeByte& SSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualFSB(FSafeByte& FSB, FSafeByte& SSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualByte(FSafeByte& FSB, uint8& NB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteSmallerByte(FSafeByte& FSB, uint8& NB) {
    return false;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotFSB(FSafeByte& FSB, uint8& Output) {
    return FSafeByte{};
}

bool USCLibrary::SCO_Pure_GetSafeByteNotEqualFSB(FSafeByte& FSB, FSafeByte& SSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteNotEqualByte(FSafeByte& FSB, uint8& NB) {
    return false;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotByte(uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteModFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteModByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteIncreaseFSB(FSafeByte& FSB, uint8& Output) {
    return FSafeByte{};
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterFSB(FSafeByte& FSB, FSafeByte& SSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualFSB(FSafeByte& FSB, FSafeByte& SSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualByte(FSafeByte& FSB, uint8& NB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteGreaterByte(FSafeByte& FSB, uint8& NB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteEqualFSB(FSafeByte& FSB, FSafeByte& SSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetSafeByteEqualByte(FSafeByte& FSB, uint8& NB) {
    return false;
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteDecreaseFSB(FSafeByte& FSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndFSB(FSafeByte& FSB, FSafeByte& SSB, uint8& Output) {
    return FSafeByte{};
}

FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndByte(FSafeByte& FSB, uint8& NB, uint8& Output) {
    return FSafeByte{};
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrFSB(FSafeBool& FSB, FSafeBool& SSB, bool& Output) {
    return FSafeBool{};
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrBool(FSafeBool& FSB, bool& NB, bool& Output) {
    return FSafeBool{};
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualFSB(FSafeBool& FSB, FSafeBool& SSB, bool& Output) {
    return FSafeBool{};
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualBool(FSafeBool& FSB, bool& NB, bool& Output) {
    return FSafeBool{};
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualFSB(FSafeBool& FSB, FSafeBool& SSB, bool& Output) {
    return FSafeBool{};
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualBool(FSafeBool& FSB, bool& NB, bool& Output) {
    return FSafeBool{};
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndFSB(FSafeBool& FSB, FSafeBool& SSB, bool& Output) {
    return FSafeBool{};
}

FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndBool(FSafeBool& FSB, bool& NB, bool& Output) {
    return FSafeBool{};
}

FRotator USCLibrary::SCO_Pure_GetRotatorTimesFSR(FRotator& NR, FSafeRotator& FSR) {
    return FRotator{};
}

bool USCLibrary::SCO_Pure_GetRotatorSmallerFSR(FRotator& NR, FSafeRotator& FSR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetRotatorSmallerEqualFSR(FRotator& NR, FSafeRotator& FSR) {
    return false;
}

FRotator USCLibrary::SCO_Pure_GetRotatorPlusFSR(FRotator& NR, FSafeRotator& FSR) {
    return FRotator{};
}

bool USCLibrary::SCO_Pure_GetRotatorNotEqualFSR(FRotator& NR, FSafeRotator& FSR) {
    return false;
}

FRotator USCLibrary::SCO_Pure_GetRotatorModFSR(FRotator& NR, FSafeRotator& FSR) {
    return FRotator{};
}

FRotator USCLibrary::SCO_Pure_GetRotatorMinusFSR(FRotator& NR, FSafeRotator& FSR) {
    return FRotator{};
}

bool USCLibrary::SCO_Pure_GetRotatorGreaterFSR(FRotator& NR, FSafeRotator& FSR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetRotatorGreaterEqualFSR(FRotator& NR, FSafeRotator& FSR) {
    return false;
}

bool USCLibrary::SCO_Pure_GetRotatorEqualFSR(FRotator& NR, FSafeRotator& FSR) {
    return false;
}

FRotator USCLibrary::SCO_Pure_GetRotatorDivideFSR(FRotator& NR, FSafeRotator& FSR) {
    return FRotator{};
}

bool USCLibrary::SCO_Pure_GetNameSmallerFSN(FName& NN, FSafeName& FSN) {
    return false;
}

FName USCLibrary::SCO_Pure_GetNamePlusFSN(FName& NN, FSafeName& FSN) {
    return NAME_None;
}

bool USCLibrary::SCO_Pure_GetNameNotEqualFSN(FName& NN, FSafeName& FSN) {
    return false;
}

bool USCLibrary::SCO_Pure_GetNameGreaterFSN(FName& NN, FSafeName& FSN) {
    return false;
}

bool USCLibrary::SCO_Pure_GetNameEqualFSN(FName& NN, FSafeName& FSN) {
    return false;
}

int32 USCLibrary::SCO_Pure_GetIntXorFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

int32 USCLibrary::SCO_Pure_GetIntTimesFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

bool USCLibrary::SCO_Pure_GetIntSmallerFSI(int32& NI, FSafeInt& FSI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetIntSmallerEqualFSI(int32& NI, FSafeInt& FSI) {
    return false;
}

int32 USCLibrary::SCO_Pure_GetIntShiftRFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

int32 USCLibrary::SCO_Pure_GetIntShiftLFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

int32 USCLibrary::SCO_Pure_GetIntPlusFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

int32 USCLibrary::SCO_Pure_GetIntOrFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

bool USCLibrary::SCO_Pure_GetIntNotEqualFSI(int32& NI, FSafeInt& FSI) {
    return false;
}

int32 USCLibrary::SCO_Pure_GetIntModFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

int32 USCLibrary::SCO_Pure_GetIntMinusFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

bool USCLibrary::SCO_Pure_GetIntGreaterFSI(int32& NI, FSafeInt& FSI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetIntGreaterEqualFSI(int32& NI, FSafeInt& FSI) {
    return false;
}

bool USCLibrary::SCO_Pure_GetIntEqualFSI(int32& NI, FSafeInt& FSI) {
    return false;
}

int32 USCLibrary::SCO_Pure_GetIntDivideFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

int32 USCLibrary::SCO_Pure_GetIntAndFSI(int32& NI, FSafeInt& FSI) {
    return 0;
}

float USCLibrary::SCO_Pure_GetFloatTimesFSF(float& NF, FSafeFloat& FSF) {
    return 0.0f;
}

bool USCLibrary::SCO_Pure_GetFloatSmallerFSF(float& NF, FSafeFloat& FSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetFloatSmallerEqualFSF(float& NF, FSafeFloat& FSF) {
    return false;
}

float USCLibrary::SCO_Pure_GetFloatPlusFSF(float& NF, FSafeFloat& FSF) {
    return 0.0f;
}

bool USCLibrary::SCO_Pure_GetFloatNotEqualFSF(float& NF, FSafeFloat& FSF) {
    return false;
}

float USCLibrary::SCO_Pure_GetFloatModFSF(float& NF, FSafeFloat& FSF) {
    return 0.0f;
}

float USCLibrary::SCO_Pure_GetFloatMinusFSF(float& NF, FSafeFloat& FSF) {
    return 0.0f;
}

bool USCLibrary::SCO_Pure_GetFloatGreaterFSF(float& NF, FSafeFloat& FSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetFloatGreaterEqualFSF(float& NF, FSafeFloat& FSF) {
    return false;
}

bool USCLibrary::SCO_Pure_GetFloatEqualFSF(float& NF, FSafeFloat& FSF) {
    return false;
}

float USCLibrary::SCO_Pure_GetFloatDivideFSF(float& NF, FSafeFloat& FSF) {
    return 0.0f;
}

bool USCLibrary::SCO_Pure_GetColorNotEqualFSC(FLinearColor& NC, FSafeColor& FSC) {
    return false;
}

bool USCLibrary::SCO_Pure_GetColorEqualFSC(FLinearColor& NC, FSafeColor& FSC) {
    return false;
}

uint8 USCLibrary::SCO_Pure_GetByteXorFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

uint8 USCLibrary::SCO_Pure_GetByteTimesFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

bool USCLibrary::SCO_Pure_GetByteSmallerFSB(uint8& NB, FSafeByte& FSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetByteSmallerEqualFSB(uint8& NB, FSafeByte& FSB) {
    return false;
}

uint8 USCLibrary::SCO_Pure_GetByteShiftRFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

uint8 USCLibrary::SCO_Pure_GetByteShiftLFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

uint8 USCLibrary::SCO_Pure_GetBytePlusFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

uint8 USCLibrary::SCO_Pure_GetByteOrFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

bool USCLibrary::SCO_Pure_GetByteNotEqualFSB(uint8& NB, FSafeByte& FSB) {
    return false;
}

uint8 USCLibrary::SCO_Pure_GetByteModFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

uint8 USCLibrary::SCO_Pure_GetByteMinusFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

bool USCLibrary::SCO_Pure_GetByteGreaterFSB(uint8& NB, FSafeByte& FSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetByteGreaterEqualFSB(uint8& NB, FSafeByte& FSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetByteEqualFSB(uint8& NB, FSafeByte& FSB) {
    return false;
}

uint8 USCLibrary::SCO_Pure_GetByteDivideFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

uint8 USCLibrary::SCO_Pure_GetByteAndFSB(uint8& NB, FSafeByte& FSB) {
    return 0;
}

bool USCLibrary::SCO_Pure_GetBoolOrFSB(bool& NB, FSafeBool& FSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetBoolNotEqualFSB(bool& NB, FSafeBool& FSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetBoolEqualFSB(bool& NB, FSafeBool& FSB) {
    return false;
}

bool USCLibrary::SCO_Pure_GetBoolAndFSB(bool& NB, FSafeBool& FSB) {
    return false;
}

FVector4 USCLibrary::SCL_Pure_SetSafeVector4DWithKey(FSafeVector4D& SV, const FString& Key, FVector4& Value) {
    return FVector4{};
}

FVector4 USCLibrary::SCL_Pure_SetSafeVector4D(FSafeVector4D& SV, FVector4& Value) {
    return FVector4{};
}

FVector USCLibrary::SCL_Pure_SetSafeVector3DWithKey(FSafeVector3D& SV, const FString& Key, const FVector Value) {
    return FVector{};
}

FVector USCLibrary::SCL_Pure_SetSafeVector3D(FSafeVector3D& SV, const FVector Value) {
    return FVector{};
}

FVector2D USCLibrary::SCL_Pure_SetSafeVector2DWithKey(FSafeVector2D& SV, const FString& Key, const FVector2D Value) {
    return FVector2D{};
}

FVector2D USCLibrary::SCL_Pure_SetSafeVector2D(FSafeVector2D& SV, const FVector2D Value) {
    return FVector2D{};
}

FTransform USCLibrary::SCL_Pure_SetSafeTransformWithKey(FSafeTransform& ST, const FString& Key, FTransform& Value) {
    return FTransform{};
}

FTransform USCLibrary::SCL_Pure_SetSafeTransform(FSafeTransform& ST, FTransform& Value) {
    return FTransform{};
}

FText USCLibrary::SCL_Pure_SetSafeTextWithKey(FSafeText& ST, const FString& Key, const FText Value) {
    return FText::GetEmpty();
}

FText USCLibrary::SCL_Pure_SetSafeText(FSafeText& ST, const FText Value) {
    return FText::GetEmpty();
}

FString USCLibrary::SCL_Pure_SetSafeStringWithKey(FSafeString& SS, const FString& Key, const FString& Value) {
    return TEXT("");
}

FString USCLibrary::SCL_Pure_SetSafeString(FSafeString& SS, const FString& Value) {
    return TEXT("");
}

FRotator USCLibrary::SCL_Pure_SetSafeRotatorWithKey(FSafeRotator& SR, const FString& Key, const FRotator Value) {
    return FRotator{};
}

FRotator USCLibrary::SCL_Pure_SetSafeRotator(FSafeRotator& SR, const FRotator Value) {
    return FRotator{};
}

FName USCLibrary::SCL_Pure_SetSafeNameWithKey(FSafeName& SN, const FString& Key, const FName Value) {
    return NAME_None;
}

FName USCLibrary::SCL_Pure_SetSafeName(FSafeName& SN, const FName Value) {
    return NAME_None;
}

int32 USCLibrary::SCL_Pure_SetSafeIntWithKey(FSafeInt& SI, const FString& Key, const int32 Value) {
    return 0;
}

int32 USCLibrary::SCL_Pure_SetSafeInt(FSafeInt& SI, const int32 Value) {
    return 0;
}

float USCLibrary::SCL_Pure_SetSafeFloatWithKey(FSafeFloat& SF, const FString& Key, const float Value) {
    return 0.0f;
}

float USCLibrary::SCL_Pure_SetSafeFloat(FSafeFloat& SF, const float Value) {
    return 0.0f;
}

FLinearColor USCLibrary::SCL_Pure_SetSafeColorWithKey(FSafeColor& Sc, const FString& Key, FLinearColor& Value) {
    return FLinearColor{};
}

FLinearColor USCLibrary::SCL_Pure_SetSafeColor(FSafeColor& Sc, FLinearColor& Value) {
    return FLinearColor{};
}

uint8 USCLibrary::SCL_Pure_SetSafeByteWithKey(FSafeByte& SB, const FString& Key, const uint8 Value) {
    return 0;
}

uint8 USCLibrary::SCL_Pure_SetSafeByte(FSafeByte& SB, const uint8 Value) {
    return 0;
}

bool USCLibrary::SCL_Pure_SetSafeBoolWithKey(FSafeBool& SB, const FString& Key, const bool Value) {
    return false;
}

bool USCLibrary::SCL_Pure_SetSafeBool(FSafeBool& SB, const bool Value) {
    return false;
}

FVector4 USCLibrary::SCL_Pure_GetSafeVector4DWithKey(FSafeVector4D& SV, const FString& Key) {
    return FVector4{};
}

FVector4 USCLibrary::SCL_Pure_GetSafeVector4D(FSafeVector4D& SV) {
    return FVector4{};
}

FVector USCLibrary::SCL_Pure_GetSafeVector3DWithKey(FSafeVector3D& SV, const FString& Key) {
    return FVector{};
}

FVector USCLibrary::SCL_Pure_GetSafeVector3D(FSafeVector3D& SV) {
    return FVector{};
}

FVector2D USCLibrary::SCL_Pure_GetSafeVector2DWithKey(FSafeVector2D& SV, const FString& Key) {
    return FVector2D{};
}

FVector2D USCLibrary::SCL_Pure_GetSafeVector2D(FSafeVector2D& SV) {
    return FVector2D{};
}

FTransform USCLibrary::SCL_Pure_GetSafeTransformWithKey(FSafeTransform& ST, const FString& Key) {
    return FTransform{};
}

FTransform USCLibrary::SCL_Pure_GetSafeTransform(FSafeTransform& ST) {
    return FTransform{};
}

FText USCLibrary::SCL_Pure_GetSafeTextWithKey(FSafeText& ST, const FString& Key) {
    return FText::GetEmpty();
}

FText USCLibrary::SCL_Pure_GetSafeText(FSafeText& ST) {
    return FText::GetEmpty();
}

FString USCLibrary::SCL_Pure_GetSafeStringWithKey(FSafeString& SS, const FString& Key) {
    return TEXT("");
}

FString USCLibrary::SCL_Pure_GetSafeString(FSafeString& SS) {
    return TEXT("");
}

FRotator USCLibrary::SCL_Pure_GetSafeRotatorWithKey(FSafeRotator& SR, const FString& Key) {
    return FRotator{};
}

FRotator USCLibrary::SCL_Pure_GetSafeRotator(FSafeRotator& SR) {
    return FRotator{};
}

FName USCLibrary::SCL_Pure_GetSafeNameWithKey(FSafeName& SN, const FString& Key) {
    return NAME_None;
}

FName USCLibrary::SCL_Pure_GetSafeName(FSafeName& SN) {
    return NAME_None;
}

int32 USCLibrary::SCL_Pure_GetSafeIntWithKey(FSafeInt& SI, const FString& Key) {
    return 0;
}

int32 USCLibrary::SCL_Pure_GetSafeInt(FSafeInt& SI) {
    return 0;
}

float USCLibrary::SCL_Pure_GetSafeFloatWithKey(FSafeFloat& SF, const FString& Key) {
    return 0.0f;
}

float USCLibrary::SCL_Pure_GetSafeFloat(FSafeFloat& SF) {
    return 0.0f;
}

FLinearColor USCLibrary::SCL_Pure_GetSafeColorWithKey(FSafeColor& Sc, const FString& Key) {
    return FLinearColor{};
}

FLinearColor USCLibrary::SCL_Pure_GetSafeColor(FSafeColor& Sc) {
    return FLinearColor{};
}

uint8 USCLibrary::SCL_Pure_GetSafeByteWithKey(FSafeByte& SB, const FString& Key) {
    return 0;
}

uint8 USCLibrary::SCL_Pure_GetSafeByte(FSafeByte& SB) {
    return 0;
}

bool USCLibrary::SCL_Pure_GetSafeBoolWithKey(FSafeBool& SB, const FString& Key) {
    return false;
}

bool USCLibrary::SCL_Pure_GetSafeBool(FSafeBool& SB) {
    return false;
}

FVector4 USCLibrary::SCL_Callable_SetSafeVector4DWithKey(FSafeVector4D& SV, const FString& Key, FVector4& Value) {
    return FVector4{};
}

FVector4 USCLibrary::SCL_Callable_SetSafeVector4D(FSafeVector4D& SV, FVector4& Value) {
    return FVector4{};
}

FVector USCLibrary::SCL_Callable_SetSafeVector3DWithKey(FSafeVector3D& SV, const FString& Key, const FVector Value) {
    return FVector{};
}

FVector USCLibrary::SCL_Callable_SetSafeVector3D(FSafeVector3D& SV, const FVector Value) {
    return FVector{};
}

FVector2D USCLibrary::SCL_Callable_SetSafeVector2DWithKey(FSafeVector2D& SV, const FString& Key, const FVector2D Value) {
    return FVector2D{};
}

FVector2D USCLibrary::SCL_Callable_SetSafeVector2D(FSafeVector2D& SV, const FVector2D Value) {
    return FVector2D{};
}

FTransform USCLibrary::SCL_Callable_SetSafeTransformWithKey(FSafeTransform& ST, const FString& Key, FTransform& Value) {
    return FTransform{};
}

FTransform USCLibrary::SCL_Callable_SetSafeTransform(FSafeTransform& ST, FTransform& Value) {
    return FTransform{};
}

FText USCLibrary::SCL_Callable_SetSafeTextWithKey(FSafeText& ST, const FString& Key, const FText Value) {
    return FText::GetEmpty();
}

FText USCLibrary::SCL_Callable_SetSafeText(FSafeText& ST, const FText Value) {
    return FText::GetEmpty();
}

FString USCLibrary::SCL_Callable_SetSafeStringWithKey(FSafeString& SS, const FString& Key, const FString& Value) {
    return TEXT("");
}

FString USCLibrary::SCL_Callable_SetSafeString(FSafeString& SS, const FString& Value) {
    return TEXT("");
}

FRotator USCLibrary::SCL_Callable_SetSafeRotatorWithKey(FSafeRotator& SR, const FString& Key, const FRotator Value) {
    return FRotator{};
}

FRotator USCLibrary::SCL_Callable_SetSafeRotator(FSafeRotator& SR, const FRotator Value) {
    return FRotator{};
}

FName USCLibrary::SCL_Callable_SetSafeNameWithKey(FSafeName& SN, const FString& Key, const FName Value) {
    return NAME_None;
}

FName USCLibrary::SCL_Callable_SetSafeName(FSafeName& SN, const FName Value) {
    return NAME_None;
}

int32 USCLibrary::SCL_Callable_SetSafeIntWithKey(FSafeInt& SI, const FString& Key, const int32 Value) {
    return 0;
}

int32 USCLibrary::SCL_Callable_SetSafeInt(FSafeInt& SI, const int32 Value) {
    return 0;
}

float USCLibrary::SCL_Callable_SetSafeFloatWithKey(FSafeFloat& SF, const FString& Key, const float Value) {
    return 0.0f;
}

float USCLibrary::SCL_Callable_SetSafeFloat(FSafeFloat& SF, const float Value) {
    return 0.0f;
}

FLinearColor USCLibrary::SCL_Callable_SetSafeColorWithKey(FSafeColor& Sc, const FString& Key, FLinearColor& Value) {
    return FLinearColor{};
}

FLinearColor USCLibrary::SCL_Callable_SetSafeColor(FSafeColor& Sc, FLinearColor& Value) {
    return FLinearColor{};
}

uint8 USCLibrary::SCL_Callable_SetSafeByteWithKey(FSafeByte& SB, const FString& Key, const uint8 Value) {
    return 0;
}

uint8 USCLibrary::SCL_Callable_SetSafeByte(FSafeByte& SB, const uint8 Value) {
    return 0;
}

bool USCLibrary::SCL_Callable_SetSafeBoolWithKey(FSafeBool& SB, const FString& Key, const bool Value) {
    return false;
}

bool USCLibrary::SCL_Callable_SetSafeBool(FSafeBool& SB, const bool Value) {
    return false;
}

FText USCLibrary::SCL_Callable_SetRawSafeText(FSafeText& ST, const FString& Value) {
    return FText::GetEmpty();
}

FString USCLibrary::SCL_Callable_SetRawSafeString(FSafeString& SS, const FString& Value) {
    return TEXT("");
}

FName USCLibrary::SCL_Callable_SetRawSafeName(FSafeName& SN, const FString& Value) {
    return NAME_None;
}

int32 USCLibrary::SCL_Callable_SetRawSafeInt(FSafeInt& SI, const FString& Value) {
    return 0;
}

float USCLibrary::SCL_Callable_SetRawSafeFloat(FSafeFloat& SF, const FString& Value) {
    return 0.0f;
}

uint8 USCLibrary::SCL_Callable_SetRawSafeByte(FSafeByte& SB, const FString& Value) {
    return 0;
}

bool USCLibrary::SCL_Callable_SetRawSafeBool(FSafeBool& SB, const FString& Value) {
    return false;
}

FVector4 USCLibrary::SCL_Callable_GetSafeVector4DWithKey(FSafeVector4D& SV, const FString& Key) {
    return FVector4{};
}

FVector4 USCLibrary::SCL_Callable_GetSafeVector4D(FSafeVector4D& SV) {
    return FVector4{};
}

FVector USCLibrary::SCL_Callable_GetSafeVector3DWithKey(FSafeVector3D& SV, const FString& Key) {
    return FVector{};
}

FVector USCLibrary::SCL_Callable_GetSafeVector3D(FSafeVector3D& SV) {
    return FVector{};
}

FVector2D USCLibrary::SCL_Callable_GetSafeVector2DWithKey(FSafeVector2D& SV, const FString& Key) {
    return FVector2D{};
}

FVector2D USCLibrary::SCL_Callable_GetSafeVector2D(FSafeVector2D& SV) {
    return FVector2D{};
}

FTransform USCLibrary::SCL_Callable_GetSafeTransformWithKey(FSafeTransform& ST, const FString& Key) {
    return FTransform{};
}

FTransform USCLibrary::SCL_Callable_GetSafeTransform(FSafeTransform& ST) {
    return FTransform{};
}

FText USCLibrary::SCL_Callable_GetSafeTextWithKey(FSafeText& ST, const FString& Key) {
    return FText::GetEmpty();
}

FText USCLibrary::SCL_Callable_GetSafeText(FSafeText& ST) {
    return FText::GetEmpty();
}

FString USCLibrary::SCL_Callable_GetSafeStringWithKey(FSafeString& SS, const FString& Key) {
    return TEXT("");
}

FString USCLibrary::SCL_Callable_GetSafeString(FSafeString& SS) {
    return TEXT("");
}

FRotator USCLibrary::SCL_Callable_GetSafeRotatorWithKey(FSafeRotator& SR, const FString& Key) {
    return FRotator{};
}

FRotator USCLibrary::SCL_Callable_GetSafeRotator(FSafeRotator& SR) {
    return FRotator{};
}

FName USCLibrary::SCL_Callable_GetSafeNameWithKey(FSafeName& SN, const FString& Key) {
    return NAME_None;
}

FName USCLibrary::SCL_Callable_GetSafeName(FSafeName& SN) {
    return NAME_None;
}

int32 USCLibrary::SCL_Callable_GetSafeIntWithKey(FSafeInt& SI, const FString& Key) {
    return 0;
}

int32 USCLibrary::SCL_Callable_GetSafeInt(FSafeInt& SI) {
    return 0;
}

float USCLibrary::SCL_Callable_GetSafeFloatWithKey(FSafeFloat& SF, const FString& Key) {
    return 0.0f;
}

float USCLibrary::SCL_Callable_GetSafeFloat(FSafeFloat& SF) {
    return 0.0f;
}

FLinearColor USCLibrary::SCL_Callable_GetSafeColorWithKey(FSafeColor& Sc, const FString& Key) {
    return FLinearColor{};
}

FLinearColor USCLibrary::SCL_Callable_GetSafeColor(FSafeColor& Sc) {
    return FLinearColor{};
}

uint8 USCLibrary::SCL_Callable_GetSafeByteWithKey(FSafeByte& SB, const FString& Key) {
    return 0;
}

uint8 USCLibrary::SCL_Callable_GetSafeByte(FSafeByte& SB) {
    return 0;
}

bool USCLibrary::SCL_Callable_GetSafeBoolWithKey(FSafeBool& SB, const FString& Key) {
    return false;
}

bool USCLibrary::SCL_Callable_GetSafeBool(FSafeBool& SB) {
    return false;
}

FString USCLibrary::SCL_Callable_GetRawSafeText(FSafeText& ST) {
    return TEXT("");
}

FString USCLibrary::SCL_Callable_GetRawSafeString(FSafeString& SS) {
    return TEXT("");
}

FString USCLibrary::SCL_Callable_GetRawSafeName(FSafeName& SN) {
    return TEXT("");
}

FString USCLibrary::SCL_Callable_GetRawSafeInt(FSafeInt& SI) {
    return TEXT("");
}

FString USCLibrary::SCL_Callable_GetRawSafeFloat(FSafeFloat& SF) {
    return TEXT("");
}

FString USCLibrary::SCL_Callable_GetRawSafeByte(FSafeByte& SB) {
    return TEXT("");
}

FString USCLibrary::SCL_Callable_GetRawSafeBool(FSafeBool& SB) {
    return TEXT("");
}


