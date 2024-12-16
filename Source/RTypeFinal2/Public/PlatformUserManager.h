#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UserManagerLoginOnCompletedDelegate.h"
#include "PlatformUserManager.generated.h"

class APlayerController;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UPlatformUserManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserManagerLoginOnCompleted OnLoginStartCompleted;
    
    UPlatformUserManager();

    UFUNCTION(BlueprintCallable)
    bool LoginStartPersistentAuth(APlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    bool LoginStartPassword(APlayerController* _playerController, const FString& _userName, const FString& _password);
    
    UFUNCTION(BlueprintCallable)
    bool LoginStartDeveloper(APlayerController* _playerController, const FString& _hostPort, const FString& _name);
    
    UFUNCTION(BlueprintCallable)
    bool LoginStartAccountPortal(APlayerController* _playerController);
    
};

