#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPresenceType.h"
#include "Presence.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPresence : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPresence();

    UFUNCTION(BlueprintCallable)
    static void SetPresence(UObject* _wco, EPresenceType _type);
    
};

