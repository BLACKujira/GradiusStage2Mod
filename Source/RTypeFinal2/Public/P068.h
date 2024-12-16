#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P068.generated.h"

class UP068DataAsset;

UCLASS(Blueprintable)
class AP068 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP068DataAsset* DataAsset;
    
public:
    AP068(const FObjectInitializer& ObjectInitializer);

};

