#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL173BParam.generated.h"

class UEL173BEnv;

UCLASS(Blueprintable)
class UEL173BParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL173BEnv* Env;
    
    UEL173BParam();

};

