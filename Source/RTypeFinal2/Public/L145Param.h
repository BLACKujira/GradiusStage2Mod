#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L145Param.generated.h"

class UL145Env;

UCLASS(Blueprintable)
class UL145Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL145Env* Env;
    
    UL145Param();

};

