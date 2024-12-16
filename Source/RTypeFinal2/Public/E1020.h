#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "E1020Parts.h"
#include "EnemyActor.h"
#include "E1020.generated.h"

class AActor;
class UEnemyLocus;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE1020 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FE1020Parts> PartsWorks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyLocus* EnemyLocus;
    
    AE1020(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

