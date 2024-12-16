#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BS504LaserInterface.generated.h"

class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UBS504LaserInterface : public UInterface {
    GENERATED_BODY()
};

class IBS504LaserInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BS504_SetTime2(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BS504_SetTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BS504_SetRad(float rad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* BS504_GetSkMesh();
    
};

