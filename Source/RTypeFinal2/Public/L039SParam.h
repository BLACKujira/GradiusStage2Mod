#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L039SParam.generated.h"

class UL039SEnv;

UCLASS(Blueprintable)
class UL039SParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL039SEnv* Env;
    
    UL039SParam();

};

