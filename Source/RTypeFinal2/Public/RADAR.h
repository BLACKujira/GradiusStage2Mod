#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "RadarUnit.h"
#include "RADAR.generated.h"

class UH012_3DataAsset;
class UH012_3Env;
class USceneComponent;

UCLASS(Blueprintable)
class ARADAR : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadarUnit> Radars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH012_3Env* Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH012_3DataAsset* dAsset;
    
public:
    ARADAR(const FObjectInitializer& ObjectInitializer);

};

