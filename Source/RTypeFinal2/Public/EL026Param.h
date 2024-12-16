#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL026Param.generated.h"

class UEL026Env;

UCLASS(Blueprintable)
class UEL026Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL026Env* Env;
    
    UEL026Param();

};

