#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL172BParam.generated.h"

class UEL172BEnv;

UCLASS(Blueprintable)
class UEL172BParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL172BEnv* Env;
    
    UEL172BParam();

};

