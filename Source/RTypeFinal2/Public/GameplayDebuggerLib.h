#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayDebuggerLib.generated.h"

class AActor;

UCLASS(Blueprintable)
class UGameplayDebuggerLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayDebuggerLib();

    UFUNCTION(BlueprintCallable)
    static void SetGameplayDebugActor(AActor* _actor);
    
};

