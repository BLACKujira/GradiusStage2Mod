#pragma once
#include "CoreMinimal.h"
#include "E7104Interface.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E7104.generated.h"

class AActor;
class AE7106;
class UCountData_Event;
class UE7104Param;

UCLASS(Blueprintable)
class AE7104 : public AEnemyActor, public IScrollManagerInterface, public IE7104Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE7104Param* ParamE7104;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SerialNoE7104;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7106* ActorE7106;
    
    AE7104(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
    UFUNCTION(BlueprintCallable)
    void LegHitLand_R3() override PURE_VIRTUAL(LegHitLand_R3,);
    
    UFUNCTION(BlueprintCallable)
    void LegHitLand_R2() override PURE_VIRTUAL(LegHitLand_R2,);
    
    UFUNCTION(BlueprintCallable)
    void LegHitLand_R1() override PURE_VIRTUAL(LegHitLand_R1,);
    
    UFUNCTION(BlueprintCallable)
    void LegHitLand_L3() override PURE_VIRTUAL(LegHitLand_L3,);
    
    UFUNCTION(BlueprintCallable)
    void LegHitLand_L2() override PURE_VIRTUAL(LegHitLand_L2,);
    
    UFUNCTION(BlueprintCallable)
    void LegHitLand_L1() override PURE_VIRTUAL(LegHitLand_L1,);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetE7106() override PURE_VIRTUAL(GetE7106, return NULL;);
    
};

