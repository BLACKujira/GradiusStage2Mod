#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameSave_PlayerStatus.h"
#include "GameSave.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameSave : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameSave();

    UFUNCTION(BlueprintCallable)
    void SetPlayerStatus(const FGameSave_PlayerStatus& _status);
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerStatus();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerStatus(FGameSave_PlayerStatus& _status);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerStatus();
    
};

