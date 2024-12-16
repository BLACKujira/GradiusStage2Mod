#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EMXXXX.h"
#include "EM007.generated.h"

class AActor;
class UEM007DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AEM007 : public AEMXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEM007DataAsset* DataAsset;
    
public:
    AEM007(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapPlayerBeginEM007(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnemyBeginEM007(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

