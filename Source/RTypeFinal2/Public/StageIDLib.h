#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStageId.h"
#include "StageIDLib.generated.h"

UCLASS(Blueprintable)
class UStageIDLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStageIDLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EStageId> GetRelativeStageID(EStageId _id);
    
};

