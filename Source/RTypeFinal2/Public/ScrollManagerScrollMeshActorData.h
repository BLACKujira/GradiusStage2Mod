#pragma once
#include "CoreMinimal.h"
#include "ScrollManagerScrollMeshActorData.generated.h"

class AScrollMeshActor;

USTRUCT(BlueprintType)
struct FScrollManagerScrollMeshActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScrollMeshActor* MeshActor;
    
    RTYPEFINAL2_API FScrollManagerScrollMeshActorData();
};

