#pragma once
#include "CoreMinimal.h"
#include "B006Part.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FB006Part {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    RTYPEFINAL2_API FB006Part();
};

