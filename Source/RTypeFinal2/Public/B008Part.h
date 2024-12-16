#pragma once
#include "CoreMinimal.h"
#include "B008Part.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FB008Part {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    RTYPEFINAL2_API FB008Part();
};

