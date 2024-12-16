#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL172Param.generated.h"

class UEL172Env;

UCLASS(Blueprintable)
class UEL172Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL172Env* Env;
    
    UEL172Param();

};

