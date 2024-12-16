#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L039PParam.generated.h"

class UL039PEnv;

UCLASS(Blueprintable)
class UL039PParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL039PEnv* Env;
    
    UL039PParam();

};

