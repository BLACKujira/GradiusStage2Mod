#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L180SParam.generated.h"

class UL180SEnv;

UCLASS(Blueprintable)
class UL180SParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL180SEnv* Env;
    
    UL180SParam();

};

