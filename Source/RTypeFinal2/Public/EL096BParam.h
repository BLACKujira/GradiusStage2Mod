#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL096BParam.generated.h"

class UEL096BEnv;

UCLASS(Blueprintable)
class UEL096BParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL096BEnv* Env;
    
    UEL096BParam();

};

