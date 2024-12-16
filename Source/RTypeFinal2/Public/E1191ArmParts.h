#pragma once
#include "CoreMinimal.h"
#include "E1191ArmParts.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FE1191ArmParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    RTYPEFINAL2_API FE1191ArmParts();
};

