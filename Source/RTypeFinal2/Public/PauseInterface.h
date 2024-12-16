#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPauseAttribute.h"
#include "PauseInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPauseInterface : public UInterface {
    GENERATED_BODY()
};

class IPauseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPauseNiagaraOnly(bool _pause);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPauseAttribute(EPauseAttribute _attr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPause(bool _pause);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActorTickEnable(bool _enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsActorTickEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPauseAttribute GetPauseAttribute();
    
};

