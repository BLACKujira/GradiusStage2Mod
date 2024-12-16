#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL074Param.generated.h"

class UEL074Env;

UCLASS(Blueprintable)
class UEL074Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL074Env* Env;
    
    UEL074Param();

};

