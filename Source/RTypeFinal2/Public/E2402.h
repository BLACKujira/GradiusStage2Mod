#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2402.generated.h"

class UChildActorComponent;
class UGroomComponent;

UCLASS(Blueprintable)
class AE2402 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroomComponent* Hair;
    
public:
    AE2402(const FObjectInitializer& ObjectInitializer);

};

