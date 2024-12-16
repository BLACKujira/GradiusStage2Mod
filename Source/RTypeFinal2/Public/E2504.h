#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2504.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AE2504 : public AEnemyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* pSlot[5];
    
public:
    AE2504(const FObjectInitializer& ObjectInitializer);

};

