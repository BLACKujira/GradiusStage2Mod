#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L083Param.generated.h"

class UL083Env;

UCLASS(Blueprintable)
class UL083Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL083Env* Env;
    
    UL083Param();

};

