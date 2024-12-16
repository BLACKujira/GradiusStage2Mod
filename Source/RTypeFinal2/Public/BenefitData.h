#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SafeInt.h"
#include "SafeString.h"
#include "BenefitData.generated.h"

class UBenefitKeyAsset;

UCLASS(Blueprintable)
class UBenefitData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeInt Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSafeString Password;
    
    UBenefitData();

    UFUNCTION(BlueprintCallable)
    FSafeString GetPassword(FSafeString _password, UBenefitKeyAsset* _data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyNo_Type();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyNo_Password();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyNo_Id();
    
};

