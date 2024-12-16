#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MBase.h"
#include "M018.generated.h"

class AActor;
class UM018DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AM018 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM018DataAsset* DataAsset;
    
public:
    AM018(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnemyBeginM018(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

