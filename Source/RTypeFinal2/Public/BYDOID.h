#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BYDOID.generated.h"

UCLASS(Blueprintable)
class UBYDOID : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBYDOID();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetValidID();
    
};

