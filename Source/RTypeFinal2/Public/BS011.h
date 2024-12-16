#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "BS011.generated.h"

class UBS011Param;
class UCountData_Event;
class UExBoxComponent;
class UMatineeCameraShake;

UCLASS(Blueprintable)
class ABS011 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBS011Param* ParamBS011;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UExBoxComponent*> EyeCollisionComponentA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UExBoxComponent*> EyeCollisionComponentC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* CameraShake;
    
public:
    ABS011(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DeathEventStart();
    
    UFUNCTION(BlueprintCallable)
    void DeathEventEnd();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

