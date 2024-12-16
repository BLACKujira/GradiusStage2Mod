#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L083SParam.generated.h"

class UL083SEnv;

UCLASS(Blueprintable)
class UL083SParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL083SEnv* Env;
    
    UL083SParam();

};

