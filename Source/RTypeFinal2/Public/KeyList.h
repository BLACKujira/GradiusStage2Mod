#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "KeyList.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UKeyList : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UKeyList();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetKeyString(int32 _index) const;
    
};

