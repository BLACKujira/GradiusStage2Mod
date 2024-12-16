#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EE5301_BOX.h"
#include "CmdE5301.generated.h"

class UObject;

UCLASS(Blueprintable)
class UCmdE5301 : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCmdE5301();

    UFUNCTION(BlueprintCallable)
    static EE5301_BOX GetHitBox(UObject* _WC, int32 _serialNo);
    
};

