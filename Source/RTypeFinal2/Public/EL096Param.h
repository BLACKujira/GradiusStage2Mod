#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL096Param.generated.h"

class UEL096Env;

UCLASS(Blueprintable)
class UEL096Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL096Env* Env;
    
    UEL096Param();

};

