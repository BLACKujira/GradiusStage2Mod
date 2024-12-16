#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS008Bom.generated.h"

UCLASS(Blueprintable)
class ABS008Bom : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    ABS008Bom(const FObjectInitializer& ObjectInitializer);

};

