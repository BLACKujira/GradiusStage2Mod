#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MBase.h"
#include "M007.generated.h"

class AActor;
class UM007DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AM007 : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM007DataAsset* DataAsset;
    
public:
    AM007(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnemyBeginM007(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

