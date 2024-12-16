#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3101.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AE3101 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE3101(const FObjectInitializer& ObjectInitializer);

};

