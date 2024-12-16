#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "Templates/SubclassOf.h"
#include "PilotDataAsset.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS(Blueprintable)
class UPilotDataAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimBlueprint;
    
    UPilotDataAsset();

};

