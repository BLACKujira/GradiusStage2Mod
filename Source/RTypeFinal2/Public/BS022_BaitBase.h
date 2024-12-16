#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS022_BaitBase.generated.h"

class UPointLightComponent;

UCLASS(Blueprintable)
class ABS022_BaitBase : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* LightComponent;
    
public:
    ABS022_BaitBase(const FObjectInitializer& ObjectInitializer);

};

