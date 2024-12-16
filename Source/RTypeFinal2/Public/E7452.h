#pragma once
#include "CoreMinimal.h"
#include "E7403SpawnData.h"
#include "E7407SpawnData.h"
#include "E7451SpawnData.h"
#include "EnemyActor.h"
#include "I000SpawnData.h"
#include "ScrollManagerInterface.h"
#include "E7452.generated.h"

class UCountData_Event;
class UE7452Param;
class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AE7452 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE7452Param* SetE7452Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE7403SpawnData> ClassActor_E7403;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE7407SpawnData> ClassActor_E7407;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE7451SpawnData> ClassActor_E7451;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FI000SpawnData> ClassActor_I000;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEnemyActor*> AttachEnemyActors;
    
public:
    AE7452(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

