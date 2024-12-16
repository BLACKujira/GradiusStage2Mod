#pragma once
#include "CoreMinimal.h"
#include "BaseDataAsset.h"
#include "EMANUAL_ID.h"
#include "EMANUAL_ID2.h"
#include "MANUAL_DEF.h"
#include "MANUAL_DEF_TABLE.h"
#include "ManualData.generated.h"

UCLASS(Blueprintable)
class UManualData : public UBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMANUAL_DEF_TABLE ManualDefs;
    
    UManualData();

    UFUNCTION(BlueprintCallable)
    FMANUAL_DEF GetManualDef2(EMANUAL_ID2 _id);
    
    UFUNCTION(BlueprintCallable)
    FMANUAL_DEF GetManualDef(EMANUAL_ID _id);
    
};

