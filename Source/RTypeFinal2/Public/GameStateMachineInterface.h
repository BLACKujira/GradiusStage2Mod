#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameStateMachineInterface.generated.h"

class UGameStateMachine;

UINTERFACE(Blueprintable, MinimalAPI)
class UGameStateMachineInterface : public UInterface {
    GENERATED_BODY()
};

class IGameStateMachineInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update(UGameStateMachine* _GSM, float _DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(UGameStateMachine* _GSM);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Exit(UGameStateMachine* _GSM);
    
};

