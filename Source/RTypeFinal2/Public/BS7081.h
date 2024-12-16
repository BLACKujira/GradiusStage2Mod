#pragma once
#include "CoreMinimal.h"
#include "EP099.h"
#include "BS7081.generated.h"

class UEHXXXXEnv;
class UEMXXXXEnv;
class USplineCmdAsset;

UCLASS(Blueprintable)
class ABS7081 : public AEP099 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USplineCmdAsset*> MovePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* WCannonEnv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* WCannonEnv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* WCannonEnv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* WCannonEnv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* WCannonEnv5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* WCannonEnv6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEMXXXXEnv* EM001Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEMXXXXEnv* EM004Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEMXXXXEnv* EM007Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEMXXXXEnv* EM009Env;
    
public:
    ABS7081(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void CmdEvent2(FName _eventName, int32 _value);
    
};

