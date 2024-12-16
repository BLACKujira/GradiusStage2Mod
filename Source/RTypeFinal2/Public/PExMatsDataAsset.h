#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "PExMatsDataAsset.generated.h"

class UPExMatDataAsset;

UCLASS(Blueprintable)
class UPExMatsDataAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPExMatDataAsset>> Materials;
    
    UPExMatsDataAsset();

};

