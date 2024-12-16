#pragma once
#include "CoreMinimal.h"
#include "RadarGhost.h"
#include "RadarUnit.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FRadarUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadarGhost> Ghosts;
    
    RTYPEFINAL2_API FRadarUnit();
};

