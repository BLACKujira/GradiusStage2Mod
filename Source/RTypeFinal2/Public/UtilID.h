#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EHELM_ID.h"
#include "ESUIT_ID.h"
#include "UtilID.generated.h"

UCLASS(Blueprintable)
class UUtilID : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilID();

    UFUNCTION(BlueprintCallable)
    static ESUIT_ID ToValidSuitID(ESUIT_ID _id);
    
    UFUNCTION(BlueprintCallable)
    static EHELM_ID ToValidHelmID(EHELM_ID _id);
    
};

