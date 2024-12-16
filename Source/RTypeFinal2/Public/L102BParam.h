#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L102BParam.generated.h"

class UL102BEnv;

UCLASS(Blueprintable)
class UL102BParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL102BEnv* Env;
    
    UL102BParam();

};

