#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL003Param.generated.h"

class UEL003Env;

UCLASS(Blueprintable)
class UEL003Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL003Env* Env;
    
    UEL003Param();

};

