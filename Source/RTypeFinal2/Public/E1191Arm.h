#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "WaterlineInterface.h"
#include "E1191Arm.generated.h"

class AE1191;
class UExSplineComponent;

UCLASS(Blueprintable)
class AE1191Arm : public AEnemyActor, public IWaterlineInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1191* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExSplineComponent* Spline;
    
public:
    AE1191Arm(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

