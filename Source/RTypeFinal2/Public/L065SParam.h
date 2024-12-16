#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L065SParam.generated.h"

class UL065SEnv;

UCLASS(Blueprintable)
class UL065SParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL065SEnv* Env;
    
    UL065SParam();

};

