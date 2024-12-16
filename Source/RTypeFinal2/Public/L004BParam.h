#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L004BParam.generated.h"

class UL004BEnv;

UCLASS(Blueprintable)
class UL004BParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL004BEnv* Env;
    
    UL004BParam();

};

