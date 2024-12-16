#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MBase.h"
#include "M010.generated.h"

class AActor;
class UM010DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AM010 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM010DataAsset* DataAsset;
    
public:
    AM010(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnemyBeginM010(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

