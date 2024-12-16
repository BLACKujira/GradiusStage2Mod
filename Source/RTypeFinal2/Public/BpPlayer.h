#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BpPlayer.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBpPlayer : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBpPlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetScreenPos(UObject* _WC);
    
};

