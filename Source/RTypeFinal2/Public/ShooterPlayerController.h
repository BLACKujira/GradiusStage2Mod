#pragma once
#include "CoreMinimal.h"
#include "EDisableFactorFlag.h"
#include "EShooterPlayerPhase.h"
#include "MultiplayPlayerController.h"
#include "ShooterPlayerControllerPausePushedDelegate.h"
#include "ShooterPlayerControllerRecievedCheerDelegate.h"
#include "Templates/SubclassOf.h"
#include "ShooterPlayerController.generated.h"

class UWidgetPause;

UCLASS(Blueprintable)
class AShooterPlayerController : public AMultiplayPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShooterPlayerControllerPausePushed OnPausePushed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidgetPause> ClassUiPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetPause* UmgUiPause;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bNodeathServer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShooterPlayerControllerRecievedCheer OnRecievedCheer;
    
public:
    AShooterPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPlayerPhase(EShooterPlayerPhase _playerPhase);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSetup(bool _bFlag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlayerPhase(EShooterPlayerPhase _playerPhase);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestCheer(int32 _loginIndex);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddDeadPlayerState();
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestCheer(int32 _loginIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetPause* GetWidgetPause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EShooterPlayerPhase GetPlayerPhase();
    
private:
    UFUNCTION(BlueprintCallable)
    void GameSlowOnPauseChanged(bool _isPaused);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableFactorInput(EDisableFactorFlag _factor);
    
    UFUNCTION(BlueprintCallable)
    void DisableFactorInput(EDisableFactorFlag _factor);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RequestCheer(int32 _loginIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddDeadPlayerState();
    
};

