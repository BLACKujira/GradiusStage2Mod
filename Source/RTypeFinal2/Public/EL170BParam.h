#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL170BParam.generated.h"

class UEL170BEnv;

UCLASS(Blueprintable)
class UEL170BParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL170BEnv* Env;
    
    UEL170BParam();

};

