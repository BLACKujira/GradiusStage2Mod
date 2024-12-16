#pragma once
#include "CoreMinimal.h"
#include "EHXXXXParam.h"
#include "EH015PParam.generated.h"

class AActor;

UCLASS(Blueprintable)
class UEH015PParam : public UEHXXXXParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerEnemy;
    
    UEH015PParam();

};

