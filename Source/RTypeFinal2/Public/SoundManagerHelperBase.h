#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SoundManagerHelperBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class USoundManagerHelperBase : public UObject {
    GENERATED_BODY()
public:
    USoundManagerHelperBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update(float _DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    void UnregistOnPauseChanged(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    void RegistOnPauseChanged(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPauseChanged(bool _isPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Exit();
    
};

