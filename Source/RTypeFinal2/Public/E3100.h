#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3100.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AE3100 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE3100(const FObjectInitializer& ObjectInitializer);

};

