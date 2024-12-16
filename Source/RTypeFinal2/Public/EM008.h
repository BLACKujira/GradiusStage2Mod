#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EMXXXX.h"
#include "EM008.generated.h"

class AActor;
class UEM008DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AEM008 : public AEMXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEM008DataAsset* DataAsset;
    
public:
    AEM008(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapPlayerBeginEM008(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnemyBeginEM008(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

