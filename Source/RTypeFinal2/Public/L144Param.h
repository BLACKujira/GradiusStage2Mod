#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L144Param.generated.h"

class UL144Env;

UCLASS(Blueprintable)
class UL144Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL144Env* Env;
    
    UL144Param();

};

