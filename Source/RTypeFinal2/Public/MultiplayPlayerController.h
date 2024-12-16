#pragma once
#include "CoreMinimal.h"
#include "CustomizeSettingOnline.h"
#include "E28PlayerController.h"
#include "MultiplayPlayerController.generated.h"

UCLASS(Blueprintable)
class AMultiplayPlayerController : public AE28PlayerController {
    GENERATED_BODY()
public:
    AMultiplayPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayerData();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlayerData();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPilotName(const FString& _pilotName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetLoginIndexLock(bool _flag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLoginIndex(int32 _index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCustomizeSettingOnline(const FCustomizeSettingOnline& _setting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LeavePlayerAll_Report();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AllocLoginIndex();
    
    UFUNCTION(BlueprintCallable)
    void ReflectData();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetPlayerData();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetDisableNetworkErrorDisconnect(bool _disable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_LeavePlayerAll();
    
    UFUNCTION(BlueprintCallable)
    void CleanupSession();
    
};

