#pragma once
#include "CoreMinimal.h"
#include "E005Param.h"
#include "E7345Param.generated.h"

class UE7345MissileParam;

UCLASS(Blueprintable)
class UE7345Param : public UE005Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE7345MissileParam* E7345MissileParam;
    
    UE7345Param();

};

