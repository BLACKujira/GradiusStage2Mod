#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL154Param.generated.h"

class UEL154Env;

UCLASS(Blueprintable)
class UEL154Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL154Env* Env;
    
    UEL154Param();

};

