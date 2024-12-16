#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyPathPlayerComponent.generated.h"

class ASplineActor;
class UEnemyPathDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnemyPathPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
public:
    UEnemyPathPlayerComponent(const FObjectInitializer& ObjectInitializer);

};

