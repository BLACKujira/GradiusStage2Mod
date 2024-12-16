#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "MuseumCheatManager.generated.h"

UCLASS(Blueprintable)
class UMuseumCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UMuseumCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void MuseumSetFullOpen(bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MuseumIsFullOpen() const;
    
};

