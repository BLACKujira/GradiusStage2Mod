#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "BS002HangarInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBS002HangarInterface : public UInterface {
    GENERATED_BODY()
};

class IBS002HangarInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_Shutter_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_Shutter_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BS002_GetGateLocation_1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BS002_GetGateLocation_0();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_GateOpen_1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_GateOpen_0();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_GateClose_1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_GateClose_0();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_Death();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_Damage_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS002_Damage_End();
    
};

