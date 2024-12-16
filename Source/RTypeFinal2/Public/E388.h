#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E388.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AE388 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Comp;
    
public:
    AE388(const FObjectInitializer& ObjectInitializer);

};

