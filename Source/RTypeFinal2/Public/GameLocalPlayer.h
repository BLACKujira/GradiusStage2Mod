#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameLocalPlayer.generated.h"

UCLASS(Blueprintable)
class UGameLocalPlayer : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UGameLocalPlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlatformUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNickname() const;
    
};

