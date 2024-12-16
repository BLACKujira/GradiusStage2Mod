#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L146Param.generated.h"

class UL146Env;

UCLASS(Blueprintable)
class UL146Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL146Env* Env;
    
    UL146Param();

};

