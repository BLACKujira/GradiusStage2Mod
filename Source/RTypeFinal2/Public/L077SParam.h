#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L077SParam.generated.h"

class UL077SEnv;

UCLASS(Blueprintable)
class UL077SParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL077SEnv* Env;
    
    UL077SParam();

};

