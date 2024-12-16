#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L138BParam.generated.h"

class UL138BEnv;

UCLASS(Blueprintable)
class UL138BParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL138BEnv* Env;
    
    UL138BParam();

};

