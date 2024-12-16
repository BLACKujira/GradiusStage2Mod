#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SafeString.h"
#include "ECFId.h"
#include "ECFType.h"
#include "BenefitLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBenefitLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBenefitLib();

    UFUNCTION(BlueprintCallable)
    static void SaveCF(UObject* _wco, const ECFId _cfid, const FString& _password);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGetEnableCFId(UObject* _wco, ECFId _cfid);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ECFId> GetEnableCFId(UObject* _wco);
    
    UFUNCTION(BlueprintCallable)
    static ECFId CheckPasswordCF(UObject* _wco, const ECFType _type, const FString& _password);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckCollectPasswordCF(UObject* _wco, const FSafeString& _password);
    
    UFUNCTION(BlueprintCallable)
    static void CallUnlockFunc(UObject* _wco, const ECFId _cfid);
    
};

