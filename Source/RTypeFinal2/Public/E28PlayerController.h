#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EPauseFlag.h"
#include "PlayerControllerPauseChangedDelegateDelegate.h"
#include "E28PlayerController.generated.h"

UCLASS(Blueprintable)
class AE28PlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerControllerPauseChangedDelegate OnPauseChanged;
    
    AE28PlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PauseGame(bool _flag, EPauseFlag _pauseFlag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PauseGame(bool _flag, EPauseFlag _pauseFlag);
    
    UFUNCTION(BlueprintCallable)
    bool BpPauseGame(bool _flag, EPauseFlag _pauseFlag);
    
};

