#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL169Param.generated.h"

class UEL169Env;

UCLASS(Blueprintable)
class UEL169Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL169Env* Env;
    
    UEL169Param();

};

