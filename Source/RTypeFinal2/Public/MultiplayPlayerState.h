#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CustomizeSetting.h"
#include "CustomizeSettingOnline.h"
#include "MultiplayPlayerState.generated.h"

UCLASS(Blueprintable)
class AMultiplayPlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CustomizeSettingOnline, meta=(AllowPrivateAccess=true))
    FCustomizeSettingOnline CustomizeSettingOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PilotName, meta=(AllowPrivateAccess=true))
    FString PilotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LoginIndex, meta=(AllowPrivateAccess=true))
    int32 LoginIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool LoginIndexLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool LoginFlag;
    
public:
    AMultiplayPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Store_ReflectData();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerData();
    
    UFUNCTION(BlueprintCallable)
    void SetPilotName(const FString& _pilotName);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSettingOnlineFromCustomizeSetting(const FCustomizeSetting& _setting);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeSettingOnline(const FCustomizeSettingOnline& _setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlayerData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PilotName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LoginIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LoginFlag();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomizeSettingOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_PilotName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_LoginIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notify_CustomizeSettingOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPilotName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCustomizeSettingOnline GetCustomizeSettingOnline();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetPlayerData();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RenewIndex_StoreReflectData(int32 _index);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReflectData();
    
};

