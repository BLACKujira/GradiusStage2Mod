#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7603.generated.h"

class AE7603_Unit;
class AS7603Laser;
class UE7603Param;
class UExSplineComponent;

UCLASS(Blueprintable)
class AE7603 : public AEnemyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AS7603Laser* LaserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE7603_Unit*> UnitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UExSplineComponent*> UnitMoveSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE7603Param* SetE7603Param;
    
public:
    AE7603(const FObjectInitializer& ObjectInitializer);

};

