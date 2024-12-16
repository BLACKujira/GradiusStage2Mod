#pragma once
#include "CoreMinimal.h"
#include "EParamSphere.h"
#include "EnemyActor.h"
#include "E1030.generated.h"

UCLASS(Blueprintable)
class AE1030 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamSphere CollisionA2;
    
public:
    AE1030(const FObjectInitializer& ObjectInitializer);

};

