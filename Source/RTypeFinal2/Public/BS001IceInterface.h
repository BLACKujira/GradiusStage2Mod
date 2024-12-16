#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BS001IceInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBS001IceInterface : public UInterface {
    GENERATED_BODY()
};

class IBS001IceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS001_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS001_Melt();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS001_Damage_3();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS001_Damage_2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS001_Damage_1();
    
};

