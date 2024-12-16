#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL170Param.generated.h"

class UEL170Env;

UCLASS(Blueprintable)
class UEL170Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL170Env* Env;
    
    UEL170Param();

};

