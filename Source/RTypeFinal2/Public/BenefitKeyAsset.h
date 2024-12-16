#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SafeInt.h"
#include "SafeString.h"
#include "BenefitKeyAsset.generated.h"

UCLASS(Blueprintable)
class UBenefitKeyAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KeyTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt EgSeedU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt EgSeedL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt EgRotor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt EgExchange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeString EgKey;
    
    UBenefitKeyAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyNo_EgSeedU();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyNo_EgSeedL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyNo_EgRotor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyNo_EgKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyNo_EgExchange();
    
};

