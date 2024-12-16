#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL173Param.generated.h"

class UEL173Env;

UCLASS(Blueprintable)
class UEL173Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL173Env* Env;
    
    UEL173Param();

};

