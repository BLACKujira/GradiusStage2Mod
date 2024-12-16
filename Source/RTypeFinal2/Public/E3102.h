#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3102.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AE3102 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE3102(const FObjectInitializer& ObjectInitializer);

};

