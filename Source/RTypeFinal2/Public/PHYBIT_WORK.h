#pragma once
#include "CoreMinimal.h"
#include "PHYBIT_WORK.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FPHYBIT_WORK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
    RTYPEFINAL2_API FPHYBIT_WORK();
};

