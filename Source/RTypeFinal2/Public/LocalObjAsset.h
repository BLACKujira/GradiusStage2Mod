#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "LocalAABB.h"
#include "LocalObj.h"
#include "LocalObjAsset.generated.h"

UCLASS(Blueprintable)
class ULocalObjAsset : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocalObj> Objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocalAABB> Bounds;
    
    ULocalObjAsset();

};

