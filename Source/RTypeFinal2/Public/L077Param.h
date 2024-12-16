#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "L077Param.generated.h"

class UL077Env;

UCLASS(Blueprintable)
class UL077Param : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL077Env* Env;
    
    UL077Param();

};

