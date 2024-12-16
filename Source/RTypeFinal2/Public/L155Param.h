#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L155Param.generated.h"

class UL155Env;

UCLASS(Blueprintable)
class UL155Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL155Env* Env;
    
    UL155Param();

};

