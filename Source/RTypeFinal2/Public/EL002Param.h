#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL002Param.generated.h"

class UEL002Env;

UCLASS(Blueprintable)
class UEL002Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL002Env* Env;
    
    UEL002Param();

};

