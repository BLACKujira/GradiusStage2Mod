#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L016Param.generated.h"

class UL016Env;

UCLASS(Blueprintable)
class UL016Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL016Env* Env;
    
    UL016Param();

};

