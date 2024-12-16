#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MBase.h"
#include "M008.generated.h"

class AActor;
class UM008DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AM008 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM008DataAsset* DataAsset;
    
public:
    AM008(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnemyBeginM008(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

