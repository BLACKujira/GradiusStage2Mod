#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL169BParam.generated.h"

class UEL169BEnv;

UCLASS(Blueprintable)
class UEL169BParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL169BEnv* Env;
    
    UEL169BParam();

};

