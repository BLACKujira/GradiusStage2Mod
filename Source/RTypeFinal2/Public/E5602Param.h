#pragma once
#include "CoreMinimal.h"
#include "E002Param.h"
#include "Templates/SubclassOf.h"
#include "E5602Param.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class UE5602Param : public UE002Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> BodyAnimBP;
    
    UE5602Param();

};

