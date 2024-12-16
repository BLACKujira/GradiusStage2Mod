#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL027Param.generated.h"

class UEL027Env;

UCLASS(Blueprintable)
class UEL027Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL027Env* Env;
    
    UEL027Param();

};

