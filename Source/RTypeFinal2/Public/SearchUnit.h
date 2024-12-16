#pragma once
#include "CoreMinimal.h"
#include "SearchUnit.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FSearchUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    RTYPEFINAL2_API FSearchUnit();
};

