#pragma once
#include "CoreMinimal.h"
#include "EFXXXX.h"
#include "EF029.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class AEF029 : public AEFXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* GhostPool;
    
public:
    AEF029(const FObjectInitializer& ObjectInitializer);

};

