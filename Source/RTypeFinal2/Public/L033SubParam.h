#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L033SubParam.generated.h"

class UL033SubEnv;

UCLASS(Blueprintable)
class UL033SubParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL033SubEnv* Env;
    
    UL033SubParam();

};

