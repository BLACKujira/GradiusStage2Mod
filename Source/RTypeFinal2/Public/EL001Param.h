#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL001Param.generated.h"

class UEL001Env;

UCLASS(Blueprintable)
class UEL001Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL001Env* Env;
    
    UEL001Param();

};

