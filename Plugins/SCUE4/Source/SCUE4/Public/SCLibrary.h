#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SafeBool.h"
#include "SafeByte.h"
#include "SafeColor.h"
#include "SafeFloat.h"
#include "SafeInt.h"
#include "SafeName.h"
#include "SafeRotator.h"
#include "SafeString.h"
#include "SafeText.h"
#include "SafeTransform.h"
#include "SafeVector2D.h"
#include "SafeVector3D.h"
#include "SafeVector4D.h"
#include "SCLibrary.generated.h"

UCLASS(Blueprintable)
class SCUE4_API USCLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCO_Pure_SetVector4DEqualFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCO_Pure_SetVector3DEqualFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCO_Pure_SetVector2DEqualFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform SCO_Pure_SetTransformEqualFST(UPARAM(Ref) FTransform& NT, UPARAM(Ref) FSafeTransform& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText SCO_Pure_SetTextEqualFST(UPARAM(Ref) FText& NT, UPARAM(Ref) FSafeText& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SCO_Pure_SetStringEqualFSS(UPARAM(Ref) FString& NS, UPARAM(Ref) FSafeString& FSS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_SetSafeVector4DEqualVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_SetSafeVector4DEqualFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_SetSafeVector3DEqualVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_SetSafeVector3DEqualFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_SetSafeVector2DEqualVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_SetSafeVector2DEqualFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeTransform SCO_Pure_SetSafeTransformEqualTransform(UPARAM(Ref) FSafeTransform& FST, UPARAM(Ref) FTransform& SST, FTransform& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeTransform SCO_Pure_SetSafeTransformEqualFST(UPARAM(Ref) FSafeTransform& FST, UPARAM(Ref) FSafeTransform& SST, FTransform& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeText SCO_Pure_SetSafeTextEqualText(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FText& NT, FText& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeText SCO_Pure_SetSafeTextEqualFST(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FSafeText& ST, FText& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeString SCO_Pure_SetSafeStringEqualString(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FString& NS, FString& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeString SCO_Pure_SetSafeStringEqualFSS(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FSafeString& SS, FString& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_SetSafeRotatorEqualRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_SetSafeRotatorEqualFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeName SCO_Pure_SetSafeNameEqualName(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FName& NN, FName& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeName SCO_Pure_SetSafeNameEqualFSN(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FSafeName& SSN, FName& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_SetSafeIntEqualInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_SetSafeIntEqualFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_SetSafeFloatEqualFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_SetSafeFloatEqualFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeColor SCO_Pure_SetSafeColorEqualFSC(UPARAM(Ref) FSafeColor& FSC, UPARAM(Ref) FSafeColor& SSC, FLinearColor& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeColor SCO_Pure_SetSafeColorEqualColor(UPARAM(Ref) FSafeColor& FSC, UPARAM(Ref) FLinearColor& SSC, FLinearColor& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_SetSafeByteEqualFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_SetSafeByteEqualByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_SetSafeBoolEqualFSB(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) FSafeBool& SSB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_SetSafeBoolEqualBool(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) bool& NB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCO_Pure_SetRotatorEqualFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SCO_Pure_SetNameEqualFSN(UPARAM(Ref) FName& NN, UPARAM(Ref) FSafeName& FSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_SetIntEqualFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCO_Pure_SetFloatEqualFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor SCO_Pure_SetColorEqualFSC(UPARAM(Ref) FLinearColor& NC, UPARAM(Ref) FSafeColor& FSC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_SetByteEqualFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_SetBoolEqualFSB(UPARAM(Ref) bool& NB, UPARAM(Ref) FSafeBool& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCO_Pure_GetVector4DTimesFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector4DSmallerFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector4DSmallerEqualFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCO_Pure_GetVector4DPlusFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector4DNotEqualFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCO_Pure_GetVector4DModFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCO_Pure_GetVector4DMinusFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector4DGreaterFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector4DGreaterEqualFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector4DEqualFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCO_Pure_GetVector4DDivideFSV(UPARAM(Ref) FVector4& NV, UPARAM(Ref) FSafeVector4D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCO_Pure_GetVector3DTimesFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector3DSmallerFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector3DSmallerEqualFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCO_Pure_GetVector3DPlusFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector3DNotEqualFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCO_Pure_GetVector3DModFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCO_Pure_GetVector3DMinusFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector3DGreaterFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector3DGreaterEqualFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector3DEqualFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCO_Pure_GetVector3DDivideFSV(UPARAM(Ref) FVector& NV, UPARAM(Ref) FSafeVector3D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCO_Pure_GetVector2DTimesFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector2DSmallerFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector2DSmallerEqualFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCO_Pure_GetVector2DPlusFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector2DNotEqualFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCO_Pure_GetVector2DModFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCO_Pure_GetVector2DMinusFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector2DGreaterFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector2DGreaterEqualFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetVector2DEqualFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCO_Pure_GetVector2DDivideFSV(UPARAM(Ref) FVector2D& NV, UPARAM(Ref) FSafeVector2D& FSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetTransformNotEqualFST(UPARAM(Ref) FTransform& NT, UPARAM(Ref) FSafeTransform& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetTransformEqualFST(UPARAM(Ref) FTransform& NT, UPARAM(Ref) FSafeTransform& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetTextSmallerFST(UPARAM(Ref) FText& NT, UPARAM(Ref) FSafeText& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText SCO_Pure_GetTextPlusFST(UPARAM(Ref) FText& NT, UPARAM(Ref) FSafeText& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetTextNotEqualFST(UPARAM(Ref) FText& NT, UPARAM(Ref) FSafeText& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetTextGreaterFST(UPARAM(Ref) FText& NT, UPARAM(Ref) FSafeText& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetTextEqualFST(UPARAM(Ref) FText& NT, UPARAM(Ref) FSafeText& FST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetStringSmallerFSS(UPARAM(Ref) FString& NS, UPARAM(Ref) FSafeString& FSS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SCO_Pure_GetStringPlusFSS(UPARAM(Ref) FString& NS, UPARAM(Ref) FSafeString& FSS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetStringNotEqualFSS(UPARAM(Ref) FString& NS, UPARAM(Ref) FSafeString& FSS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetStringGreaterFSS(UPARAM(Ref) FString& NS, UPARAM(Ref) FSafeString& FSS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetStringEqualFSS(UPARAM(Ref) FString& NS, UPARAM(Ref) FSafeString& FSS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DTimesVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DTimesFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DSmallerVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DSmallerFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DSmallerEqualVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DSmallerEqualFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DPlusVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DPlusFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DNotEqualVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DNotEqualFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DModVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DModFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DMinusVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DMinusFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DGreaterVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DGreaterFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DGreaterEqualVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DGreaterEqualFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DEqualVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector4DEqualFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DDivideVector4D(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FVector4& NV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector4D SCO_Pure_GetSafeVector4DDivideFSV(UPARAM(Ref) FSafeVector4D& FSV, UPARAM(Ref) FSafeVector4D& SSV, FVector4& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DTimesVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DTimesFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DSmallerVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DSmallerFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DSmallerEqualVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DSmallerEqualFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DPlusVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DPlusFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DNotEqualVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DNotEqualFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DModVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DModFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DMinusVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DMinusFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DGreaterVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DGreaterFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DGreaterEqualVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DGreaterEqualFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DEqualVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector3DEqualFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DDivideVector3D(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FVector& NV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector3D SCO_Pure_GetSafeVector3DDivideFSV(UPARAM(Ref) FSafeVector3D& FSV, UPARAM(Ref) FSafeVector3D& SSV, FVector& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DTimesVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DTimesFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DSmallerVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DSmallerFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DSmallerEqualVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DSmallerEqualFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DPlusVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DPlusFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DNotEqualVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DNotEqualFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DModVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DModFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DMinusVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DMinusFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DGreaterVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DGreaterFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DGreaterEqualVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DGreaterEqualFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DEqualVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeVector2DEqualFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DDivideVector2D(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FVector2D& NV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeVector2D SCO_Pure_GetSafeVector2DDivideFSV(UPARAM(Ref) FSafeVector2D& FSV, UPARAM(Ref) FSafeVector2D& SSV, FVector2D& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTransformNotEqualTransform(UPARAM(Ref) FSafeTransform& FST, UPARAM(Ref) FTransform& NT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTransformNotEqualFST(UPARAM(Ref) FSafeTransform& FST, UPARAM(Ref) FSafeTransform& SST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTransformEqualTransform(UPARAM(Ref) FSafeTransform& FST, UPARAM(Ref) FTransform& NT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTransformEqualFST(UPARAM(Ref) FSafeTransform& FST, UPARAM(Ref) FSafeTransform& SST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTextSmallerText(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FText& NT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTextSmallerFST(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FSafeText& ST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeText SCO_Pure_GetSafeTextPlusText(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FText& NT, FText& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeText SCO_Pure_GetSafeTextPlusFST(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FSafeText& ST, FText& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTextNotEqualText(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FText& NT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTextNotEqualFST(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FSafeText& ST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTextGreaterText(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FText& NT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTextGreaterFST(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FSafeText& ST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTextEqualText(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FText& NT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeTextEqualFST(UPARAM(Ref) FSafeText& FST, UPARAM(Ref) FSafeText& ST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeStringSmallerString(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FString& NS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeStringSmallerFSS(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FSafeString& SS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeString SCO_Pure_GetSafeStringPlusString(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FString& NS, FString& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeString SCO_Pure_GetSafeStringPlusFSS(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FSafeString& SS, FString& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeStringNotEqualString(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FString& NS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeStringNotEqualFSS(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FSafeString& SS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeStringGreaterString(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FString& NS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeStringGreaterFSS(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FSafeString& SS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeStringEqualString(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FString& NS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeStringEqualFSS(UPARAM(Ref) FSafeString& FSS, UPARAM(Ref) FSafeString& SS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorTimesRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorTimesFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorSmallerRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorSmallerFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorSmallerEqualRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorSmallerEqualFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorPlusRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorPlusFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorNotEqualRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorNotEqualFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorModRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorModFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorMinusRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorMinusFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorGreaterRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorGreaterFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorGreaterEqualRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorGreaterEqualFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorEqualRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeRotatorEqualFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorDivideRotator(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FRotator& NR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeRotator SCO_Pure_GetSafeRotatorDivideFSR(UPARAM(Ref) FSafeRotator& FSR, UPARAM(Ref) FSafeRotator& SSR, FRotator& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeNameSmallerName(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FName& NN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeNameSmallerFSN(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FSafeName& SSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeName SCO_Pure_GetSafeNamePlusName(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FName& NN, FName& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeName SCO_Pure_GetSafeNamePlusFSN(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FSafeName& SSN, FName& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeNameNotEqualName(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FName& NN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeNameNotEqualFSN(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FSafeName& SSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeNameGreaterName(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FName& NN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeNameGreaterFSN(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FSafeName& SSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeNameEqualName(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FName& NN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeNameEqualFSN(UPARAM(Ref) FSafeName& FSN, UPARAM(Ref) FSafeName& SSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntXorInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntXorFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntTimesInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntTimesFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntSmallerInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntSmallerFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntSmallerEqualInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntSmallerEqualFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntShiftRInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntShiftRFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntShiftLInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntShiftLFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntPlusInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntPlusFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntPlusEqualInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntPlusEqualFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntOrInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntOrFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntNotInt(UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntNotFSI(UPARAM(Ref) FSafeInt& FSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntNotEqualInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntNotEqualFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntModInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntModFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntMinusInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntMinusFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntMinusEqualInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntMinusEqualFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntIncreaseFSI(UPARAM(Ref) FSafeInt& FSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntGreaterInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntGreaterFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntGreaterEqualInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntGreaterEqualFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntEqualInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeIntEqualFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntDivideInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntDivideFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntDecreaseFSI(UPARAM(Ref) FSafeInt& FSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntAndInt(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) int32& NI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeInt SCO_Pure_GetSafeIntAndFSI(UPARAM(Ref) FSafeInt& FSI, UPARAM(Ref) FSafeInt& SSI, int32& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatTimesFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatTimesFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatSmallerFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatSmallerFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatSmallerEqualFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatSmallerEqualFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatPlusFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatPlusFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatPlusEqualFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatPlusEqualFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatNotEqualFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatNotEqualFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatModFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatModFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatMinusFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatMinusFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatMinusEqualFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatMinusEqualFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatIncreaseFSF(UPARAM(Ref) FSafeFloat& FSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatGreaterFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatGreaterFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatGreaterEqualFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatGreaterEqualFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatEqualFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeFloatEqualFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatDivideFSF(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) FSafeFloat& SSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatDivideFloat(UPARAM(Ref) FSafeFloat& FSF, UPARAM(Ref) float& NF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeFloat SCO_Pure_GetSafeFloatDecreaseFSF(UPARAM(Ref) FSafeFloat& FSF, float& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeColorNotEqualFSC(UPARAM(Ref) FSafeColor& FSC, UPARAM(Ref) FSafeColor& SSC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeColorNotEqualColor(UPARAM(Ref) FSafeColor& FSC, UPARAM(Ref) FLinearColor& NC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeColorEqualFSC(UPARAM(Ref) FSafeColor& FSC, UPARAM(Ref) FSafeColor& SSC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeColorEqualColor(UPARAM(Ref) FSafeColor& FSC, UPARAM(Ref) FLinearColor& NC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteXorFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteXorByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteTimesFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteTimesByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteSmallerFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteSmallerEqualFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteSmallerEqualByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteSmallerByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteShiftRFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteShiftRByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteShiftLFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteShiftLByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeBytePlusFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeBytePlusEqualFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeBytePlusEqualByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeBytePlusByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteOrFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteOrByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteNotFSB(UPARAM(Ref) FSafeByte& FSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteNotEqualFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteNotEqualByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteNotByte(UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteModFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteModByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteMinusFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteMinusEqualFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteMinusEqualByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteMinusByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteIncreaseFSB(UPARAM(Ref) FSafeByte& FSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteGreaterFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteGreaterEqualFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteGreaterEqualByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteGreaterByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteEqualFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetSafeByteEqualByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteDivideFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteDivideByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteDecreaseFSB(UPARAM(Ref) FSafeByte& FSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteAndFSB(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) FSafeByte& SSB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeByte SCO_Pure_GetSafeByteAndByte(UPARAM(Ref) FSafeByte& FSB, UPARAM(Ref) uint8& NB, uint8& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_GetSafeBoolOrFSB(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) FSafeBool& SSB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_GetSafeBoolOrBool(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) bool& NB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_GetSafeBoolNotEqualFSB(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) FSafeBool& SSB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_GetSafeBoolNotEqualBool(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) bool& NB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_GetSafeBoolEqualFSB(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) FSafeBool& SSB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_GetSafeBoolEqualBool(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) bool& NB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_GetSafeBoolAndFSB(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) FSafeBool& SSB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSafeBool SCO_Pure_GetSafeBoolAndBool(UPARAM(Ref) FSafeBool& FSB, UPARAM(Ref) bool& NB, bool& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCO_Pure_GetRotatorTimesFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetRotatorSmallerFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetRotatorSmallerEqualFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCO_Pure_GetRotatorPlusFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetRotatorNotEqualFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCO_Pure_GetRotatorModFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCO_Pure_GetRotatorMinusFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetRotatorGreaterFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetRotatorGreaterEqualFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetRotatorEqualFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCO_Pure_GetRotatorDivideFSR(UPARAM(Ref) FRotator& NR, UPARAM(Ref) FSafeRotator& FSR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetNameSmallerFSN(UPARAM(Ref) FName& NN, UPARAM(Ref) FSafeName& FSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SCO_Pure_GetNamePlusFSN(UPARAM(Ref) FName& NN, UPARAM(Ref) FSafeName& FSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetNameNotEqualFSN(UPARAM(Ref) FName& NN, UPARAM(Ref) FSafeName& FSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetNameGreaterFSN(UPARAM(Ref) FName& NN, UPARAM(Ref) FSafeName& FSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetNameEqualFSN(UPARAM(Ref) FName& NN, UPARAM(Ref) FSafeName& FSN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntXorFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntTimesFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetIntSmallerFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetIntSmallerEqualFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntShiftRFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntShiftLFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntPlusFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntOrFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetIntNotEqualFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntModFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntMinusFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetIntGreaterFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetIntGreaterEqualFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetIntEqualFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntDivideFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCO_Pure_GetIntAndFSI(UPARAM(Ref) int32& NI, UPARAM(Ref) FSafeInt& FSI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCO_Pure_GetFloatTimesFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetFloatSmallerFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetFloatSmallerEqualFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCO_Pure_GetFloatPlusFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetFloatNotEqualFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCO_Pure_GetFloatModFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCO_Pure_GetFloatMinusFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetFloatGreaterFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetFloatGreaterEqualFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetFloatEqualFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCO_Pure_GetFloatDivideFSF(UPARAM(Ref) float& NF, UPARAM(Ref) FSafeFloat& FSF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetColorNotEqualFSC(UPARAM(Ref) FLinearColor& NC, UPARAM(Ref) FSafeColor& FSC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetColorEqualFSC(UPARAM(Ref) FLinearColor& NC, UPARAM(Ref) FSafeColor& FSC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteXorFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteTimesFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetByteSmallerFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetByteSmallerEqualFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteShiftRFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteShiftLFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetBytePlusFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteOrFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetByteNotEqualFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteModFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteMinusFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetByteGreaterFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetByteGreaterEqualFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetByteEqualFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteDivideFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCO_Pure_GetByteAndFSB(UPARAM(Ref) uint8& NB, UPARAM(Ref) FSafeByte& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetBoolOrFSB(UPARAM(Ref) bool& NB, UPARAM(Ref) FSafeBool& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetBoolNotEqualFSB(UPARAM(Ref) bool& NB, UPARAM(Ref) FSafeBool& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetBoolEqualFSB(UPARAM(Ref) bool& NB, UPARAM(Ref) FSafeBool& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCO_Pure_GetBoolAndFSB(UPARAM(Ref) bool& NB, UPARAM(Ref) FSafeBool& FSB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCL_Pure_SetSafeVector4DWithKey(UPARAM(Ref) FSafeVector4D& SV, const FString& Key, UPARAM(Ref) FVector4& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCL_Pure_SetSafeVector4D(UPARAM(Ref) FSafeVector4D& SV, UPARAM(Ref) FVector4& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCL_Pure_SetSafeVector3DWithKey(UPARAM(Ref) FSafeVector3D& SV, const FString& Key, const FVector Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCL_Pure_SetSafeVector3D(UPARAM(Ref) FSafeVector3D& SV, const FVector Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCL_Pure_SetSafeVector2DWithKey(UPARAM(Ref) FSafeVector2D& SV, const FString& Key, const FVector2D Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCL_Pure_SetSafeVector2D(UPARAM(Ref) FSafeVector2D& SV, const FVector2D Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform SCL_Pure_SetSafeTransformWithKey(UPARAM(Ref) FSafeTransform& ST, const FString& Key, UPARAM(Ref) FTransform& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform SCL_Pure_SetSafeTransform(UPARAM(Ref) FSafeTransform& ST, UPARAM(Ref) FTransform& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText SCL_Pure_SetSafeTextWithKey(UPARAM(Ref) FSafeText& ST, const FString& Key, const FText Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText SCL_Pure_SetSafeText(UPARAM(Ref) FSafeText& ST, const FText Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SCL_Pure_SetSafeStringWithKey(UPARAM(Ref) FSafeString& SS, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SCL_Pure_SetSafeString(UPARAM(Ref) FSafeString& SS, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCL_Pure_SetSafeRotatorWithKey(UPARAM(Ref) FSafeRotator& SR, const FString& Key, const FRotator Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCL_Pure_SetSafeRotator(UPARAM(Ref) FSafeRotator& SR, const FRotator Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SCL_Pure_SetSafeNameWithKey(UPARAM(Ref) FSafeName& SN, const FString& Key, const FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SCL_Pure_SetSafeName(UPARAM(Ref) FSafeName& SN, const FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCL_Pure_SetSafeIntWithKey(UPARAM(Ref) FSafeInt& SI, const FString& Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCL_Pure_SetSafeInt(UPARAM(Ref) FSafeInt& SI, const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCL_Pure_SetSafeFloatWithKey(UPARAM(Ref) FSafeFloat& SF, const FString& Key, const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCL_Pure_SetSafeFloat(UPARAM(Ref) FSafeFloat& SF, const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor SCL_Pure_SetSafeColorWithKey(UPARAM(Ref) FSafeColor& Sc, const FString& Key, UPARAM(Ref) FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor SCL_Pure_SetSafeColor(UPARAM(Ref) FSafeColor& Sc, UPARAM(Ref) FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCL_Pure_SetSafeByteWithKey(UPARAM(Ref) FSafeByte& SB, const FString& Key, const uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCL_Pure_SetSafeByte(UPARAM(Ref) FSafeByte& SB, const uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCL_Pure_SetSafeBoolWithKey(UPARAM(Ref) FSafeBool& SB, const FString& Key, const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCL_Pure_SetSafeBool(UPARAM(Ref) FSafeBool& SB, const bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCL_Pure_GetSafeVector4DWithKey(UPARAM(Ref) FSafeVector4D& SV, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector4 SCL_Pure_GetSafeVector4D(UPARAM(Ref) FSafeVector4D& SV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCL_Pure_GetSafeVector3DWithKey(UPARAM(Ref) FSafeVector3D& SV, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SCL_Pure_GetSafeVector3D(UPARAM(Ref) FSafeVector3D& SV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCL_Pure_GetSafeVector2DWithKey(UPARAM(Ref) FSafeVector2D& SV, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SCL_Pure_GetSafeVector2D(UPARAM(Ref) FSafeVector2D& SV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform SCL_Pure_GetSafeTransformWithKey(UPARAM(Ref) FSafeTransform& ST, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform SCL_Pure_GetSafeTransform(UPARAM(Ref) FSafeTransform& ST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText SCL_Pure_GetSafeTextWithKey(UPARAM(Ref) FSafeText& ST, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText SCL_Pure_GetSafeText(UPARAM(Ref) FSafeText& ST);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SCL_Pure_GetSafeStringWithKey(UPARAM(Ref) FSafeString& SS, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString SCL_Pure_GetSafeString(UPARAM(Ref) FSafeString& SS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCL_Pure_GetSafeRotatorWithKey(UPARAM(Ref) FSafeRotator& SR, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator SCL_Pure_GetSafeRotator(UPARAM(Ref) FSafeRotator& SR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SCL_Pure_GetSafeNameWithKey(UPARAM(Ref) FSafeName& SN, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SCL_Pure_GetSafeName(UPARAM(Ref) FSafeName& SN);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCL_Pure_GetSafeIntWithKey(UPARAM(Ref) FSafeInt& SI, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SCL_Pure_GetSafeInt(UPARAM(Ref) FSafeInt& SI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCL_Pure_GetSafeFloatWithKey(UPARAM(Ref) FSafeFloat& SF, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SCL_Pure_GetSafeFloat(UPARAM(Ref) FSafeFloat& SF);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor SCL_Pure_GetSafeColorWithKey(UPARAM(Ref) FSafeColor& Sc, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor SCL_Pure_GetSafeColor(UPARAM(Ref) FSafeColor& Sc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCL_Pure_GetSafeByteWithKey(UPARAM(Ref) FSafeByte& SB, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 SCL_Pure_GetSafeByte(UPARAM(Ref) FSafeByte& SB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCL_Pure_GetSafeBoolWithKey(UPARAM(Ref) FSafeBool& SB, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SCL_Pure_GetSafeBool(UPARAM(Ref) FSafeBool& SB);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 SCL_Callable_SetSafeVector4DWithKey(UPARAM(Ref) FSafeVector4D& SV, const FString& Key, UPARAM(Ref) FVector4& Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 SCL_Callable_SetSafeVector4D(UPARAM(Ref) FSafeVector4D& SV, UPARAM(Ref) FVector4& Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector SCL_Callable_SetSafeVector3DWithKey(UPARAM(Ref) FSafeVector3D& SV, const FString& Key, const FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector SCL_Callable_SetSafeVector3D(UPARAM(Ref) FSafeVector3D& SV, const FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D SCL_Callable_SetSafeVector2DWithKey(UPARAM(Ref) FSafeVector2D& SV, const FString& Key, const FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D SCL_Callable_SetSafeVector2D(UPARAM(Ref) FSafeVector2D& SV, const FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    static FTransform SCL_Callable_SetSafeTransformWithKey(UPARAM(Ref) FSafeTransform& ST, const FString& Key, UPARAM(Ref) FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static FTransform SCL_Callable_SetSafeTransform(UPARAM(Ref) FSafeTransform& ST, UPARAM(Ref) FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static FText SCL_Callable_SetSafeTextWithKey(UPARAM(Ref) FSafeText& ST, const FString& Key, const FText Value);
    
    UFUNCTION(BlueprintCallable)
    static FText SCL_Callable_SetSafeText(UPARAM(Ref) FSafeText& ST, const FText Value);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_SetSafeStringWithKey(UPARAM(Ref) FSafeString& SS, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_SetSafeString(UPARAM(Ref) FSafeString& SS, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FRotator SCL_Callable_SetSafeRotatorWithKey(UPARAM(Ref) FSafeRotator& SR, const FString& Key, const FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static FRotator SCL_Callable_SetSafeRotator(UPARAM(Ref) FSafeRotator& SR, const FRotator Value);
    
    UFUNCTION(BlueprintCallable)
    static FName SCL_Callable_SetSafeNameWithKey(UPARAM(Ref) FSafeName& SN, const FString& Key, const FName Value);
    
    UFUNCTION(BlueprintCallable)
    static FName SCL_Callable_SetSafeName(UPARAM(Ref) FSafeName& SN, const FName Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 SCL_Callable_SetSafeIntWithKey(UPARAM(Ref) FSafeInt& SI, const FString& Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 SCL_Callable_SetSafeInt(UPARAM(Ref) FSafeInt& SI, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static float SCL_Callable_SetSafeFloatWithKey(UPARAM(Ref) FSafeFloat& SF, const FString& Key, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static float SCL_Callable_SetSafeFloat(UPARAM(Ref) FSafeFloat& SF, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor SCL_Callable_SetSafeColorWithKey(UPARAM(Ref) FSafeColor& Sc, const FString& Key, UPARAM(Ref) FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor SCL_Callable_SetSafeColor(UPARAM(Ref) FSafeColor& Sc, UPARAM(Ref) FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable)
    static uint8 SCL_Callable_SetSafeByteWithKey(UPARAM(Ref) FSafeByte& SB, const FString& Key, const uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static uint8 SCL_Callable_SetSafeByte(UPARAM(Ref) FSafeByte& SB, const uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SCL_Callable_SetSafeBoolWithKey(UPARAM(Ref) FSafeBool& SB, const FString& Key, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SCL_Callable_SetSafeBool(UPARAM(Ref) FSafeBool& SB, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    static FText SCL_Callable_SetRawSafeText(UPARAM(Ref) FSafeText& ST, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_SetRawSafeString(UPARAM(Ref) FSafeString& SS, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FName SCL_Callable_SetRawSafeName(UPARAM(Ref) FSafeName& SN, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 SCL_Callable_SetRawSafeInt(UPARAM(Ref) FSafeInt& SI, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static float SCL_Callable_SetRawSafeFloat(UPARAM(Ref) FSafeFloat& SF, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static uint8 SCL_Callable_SetRawSafeByte(UPARAM(Ref) FSafeByte& SB, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SCL_Callable_SetRawSafeBool(UPARAM(Ref) FSafeBool& SB, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 SCL_Callable_GetSafeVector4DWithKey(UPARAM(Ref) FSafeVector4D& SV, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 SCL_Callable_GetSafeVector4D(UPARAM(Ref) FSafeVector4D& SV);
    
    UFUNCTION(BlueprintCallable)
    static FVector SCL_Callable_GetSafeVector3DWithKey(UPARAM(Ref) FSafeVector3D& SV, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FVector SCL_Callable_GetSafeVector3D(UPARAM(Ref) FSafeVector3D& SV);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D SCL_Callable_GetSafeVector2DWithKey(UPARAM(Ref) FSafeVector2D& SV, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D SCL_Callable_GetSafeVector2D(UPARAM(Ref) FSafeVector2D& SV);
    
    UFUNCTION(BlueprintCallable)
    static FTransform SCL_Callable_GetSafeTransformWithKey(UPARAM(Ref) FSafeTransform& ST, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FTransform SCL_Callable_GetSafeTransform(UPARAM(Ref) FSafeTransform& ST);
    
    UFUNCTION(BlueprintCallable)
    static FText SCL_Callable_GetSafeTextWithKey(UPARAM(Ref) FSafeText& ST, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FText SCL_Callable_GetSafeText(UPARAM(Ref) FSafeText& ST);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetSafeStringWithKey(UPARAM(Ref) FSafeString& SS, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetSafeString(UPARAM(Ref) FSafeString& SS);
    
    UFUNCTION(BlueprintCallable)
    static FRotator SCL_Callable_GetSafeRotatorWithKey(UPARAM(Ref) FSafeRotator& SR, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FRotator SCL_Callable_GetSafeRotator(UPARAM(Ref) FSafeRotator& SR);
    
    UFUNCTION(BlueprintCallable)
    static FName SCL_Callable_GetSafeNameWithKey(UPARAM(Ref) FSafeName& SN, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FName SCL_Callable_GetSafeName(UPARAM(Ref) FSafeName& SN);
    
    UFUNCTION(BlueprintCallable)
    static int32 SCL_Callable_GetSafeIntWithKey(UPARAM(Ref) FSafeInt& SI, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static int32 SCL_Callable_GetSafeInt(UPARAM(Ref) FSafeInt& SI);
    
    UFUNCTION(BlueprintCallable)
    static float SCL_Callable_GetSafeFloatWithKey(UPARAM(Ref) FSafeFloat& SF, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static float SCL_Callable_GetSafeFloat(UPARAM(Ref) FSafeFloat& SF);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor SCL_Callable_GetSafeColorWithKey(UPARAM(Ref) FSafeColor& Sc, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor SCL_Callable_GetSafeColor(UPARAM(Ref) FSafeColor& Sc);
    
    UFUNCTION(BlueprintCallable)
    static uint8 SCL_Callable_GetSafeByteWithKey(UPARAM(Ref) FSafeByte& SB, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static uint8 SCL_Callable_GetSafeByte(UPARAM(Ref) FSafeByte& SB);
    
    UFUNCTION(BlueprintCallable)
    static bool SCL_Callable_GetSafeBoolWithKey(UPARAM(Ref) FSafeBool& SB, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static bool SCL_Callable_GetSafeBool(UPARAM(Ref) FSafeBool& SB);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetRawSafeText(UPARAM(Ref) FSafeText& ST);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetRawSafeString(UPARAM(Ref) FSafeString& SS);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetRawSafeName(UPARAM(Ref) FSafeName& SN);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetRawSafeInt(UPARAM(Ref) FSafeInt& SI);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetRawSafeFloat(UPARAM(Ref) FSafeFloat& SF);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetRawSafeByte(UPARAM(Ref) FSafeByte& SB);
    
    UFUNCTION(BlueprintCallable)
    static FString SCL_Callable_GetRawSafeBool(UPARAM(Ref) FSafeBool& SB);
    
};

