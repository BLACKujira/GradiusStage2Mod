#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameConfig.generated.h"

UCLASS(Blueprintable)
class UGameConfig : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameConfig();

    UFUNCTION(BlueprintCallable)
    void SetIconPlatform(const FString& _val, bool _saveToConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIconPlatform() const;
    
};

