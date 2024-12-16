#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L165SParam.generated.h"

class UL165SEnv;

UCLASS(Blueprintable)
class UL165SParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL165SEnv* Env;
    
    UL165SParam();

};

