#pragma once
#include "CoreMinimal.h"
#include "B008Part.h"
#include "B008PartR.generated.h"

class UMaterialInstanceDynamic;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FB008PartR : public FB008Part {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MiBodys;
    
    RTYPEFINAL2_API FB008PartR();
};

