#pragma once
#include "CoreMinimal.h"
#include "EHXXXXEnv.h"
#include "EH1XXXEnv.generated.h"

UCLASS(Blueprintable)
class UEH1XXXEnv : public UEHXXXXEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* EnvA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* EnvB;
    
public:
    UEH1XXXEnv();

};

