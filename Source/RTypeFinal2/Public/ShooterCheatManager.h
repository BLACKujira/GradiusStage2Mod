#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ShooterCheatManager.generated.h"

UCLASS(Blueprintable)
class UShooterCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UShooterCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void SetVisibleScreenFrame(bool _display);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerDead(int32 _delayFrame);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerAndStageClear(int32 _delayFrame);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerAndEnemyAllDead(int32 _delayFrame);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEnemyAllDead(int32 _delayFrame);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerNoDeathDeathEffect(bool _enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerNoDeath(bool _enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerInfiniteLife(bool _enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MedalSetFullOpen(bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MedalIsFullOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoDeathDeathEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfiniteLife();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GallerySetFullOpen(bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GalleryIsFullOpen() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CostumeSetFullOpen(bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CostumeIsFullOpen() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void BydolaboSetFullOpen(bool _flag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BydolaboSetFullFound(bool _flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BydolaboIsFullOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BydolaboIsFullFound() const;
    
};

