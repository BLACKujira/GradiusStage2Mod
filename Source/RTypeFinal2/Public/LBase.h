#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "LBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class ALBase : public APoolActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PreActor;
    
public:
    ALBase(const FObjectInitializer& ObjectInitializer);

};

