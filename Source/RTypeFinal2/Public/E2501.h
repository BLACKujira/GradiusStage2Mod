#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2501.generated.h"

class AE2501;
class AE2506Sec;

UCLASS(Blueprintable)
class AE2501 : public AEnemyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE2501*> E2501Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE2506Sec*> E2506SecActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* PairActor;
    
public:
    AE2501(const FObjectInitializer& ObjectInitializer);

};

