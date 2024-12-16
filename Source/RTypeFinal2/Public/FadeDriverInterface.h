#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FadeDriverInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFadeDriverInterface : public UInterface {
    GENERATED_BODY()
};

class IFadeDriverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetFadeColor(FLinearColor& _color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallFadeStart(float _time, int32 _zorder, const FLinearColor& _color, bool _autoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallFadeEnd(float _time, int32 _zorder, const FLinearColor& _color, bool _autoDestroy);
    
};

