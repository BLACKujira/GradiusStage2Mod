#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilRender.generated.h"

UCLASS(Blueprintable)
class UUtilRender : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilRender();

    UFUNCTION(BlueprintCallable)
    static void FlushRenderingCommands(bool bFlushDeferredDeletes);
    
};

