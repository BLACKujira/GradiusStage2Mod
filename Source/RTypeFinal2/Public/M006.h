#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MBase.h"
#include "M006.generated.h"

class AActor;
class UM006DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AM006 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM006DataAsset* DataAsset;
    
public:
    AM006(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnemyBeginM006(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

