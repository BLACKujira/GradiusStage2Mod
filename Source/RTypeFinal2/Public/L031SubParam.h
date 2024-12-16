#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L031SubParam.generated.h"

class UL031SubEnv;

UCLASS(Blueprintable)
class UL031SubParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL031SubEnv* Env;
    
    UL031SubParam();

};

