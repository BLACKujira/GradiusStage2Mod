#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL021Param.generated.h"

class UEL021Env;

UCLASS(Blueprintable)
class UEL021Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL021Env* Env;
    
    UEL021Param();

};

