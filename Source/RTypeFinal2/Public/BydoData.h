#pragma once
#include "CoreMinimal.h"
#include "BYDO_DEF.h"
#include "BYDO_DEF_TABLE.h"
#include "BaseDataAsset.h"
#include "BydoData.generated.h"

UCLASS(Blueprintable)
class UBydoData : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBYDO_DEF_TABLE BydoDefs;
    
    UBydoData();

    UFUNCTION(BlueprintCallable)
    void OpenAllBydoData();
    
    UFUNCTION(BlueprintCallable)
    FBYDO_DEF GetBydoDef(int32 _id);
    
};

