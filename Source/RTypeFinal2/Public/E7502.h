#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7502.generated.h"

class AE7502_gun;
class ASplineActor;

UCLASS(Blueprintable)
class AE7502 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE7502_gun*> GunActors;
    
public:
    AE7502(const FObjectInitializer& ObjectInitializer);

};

