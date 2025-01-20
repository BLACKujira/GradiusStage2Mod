#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E7302.generated.h"

class UCountData_Event;
class UE7302Param;

UCLASS(Blueprintable)
class AE7302 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE7302Param* ParamE7302;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SerialNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isChangeDifficulty;
    
    AE7302(const FObjectInitializer& ObjectInitializer);

    UStaticMeshComponent* mesh;

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

