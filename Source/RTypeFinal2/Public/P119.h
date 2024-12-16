#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P119.generated.h"

class UP119DataAsset;
class USceneComponent;

UCLASS(Blueprintable)
class AP119 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP119DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ShockWaveNode2;
    
public:
    AP119(const FObjectInitializer& ObjectInitializer);

};

