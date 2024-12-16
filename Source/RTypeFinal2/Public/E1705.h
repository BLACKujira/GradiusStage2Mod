#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1705.generated.h"

class UE1705PointLightComponent;

UCLASS(Blueprintable)
class AE1705 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UE1705PointLightComponent* PointLightComponent;
    
public:
    AE1705(const FObjectInitializer& ObjectInitializer);

};

