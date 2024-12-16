#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P032.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP032 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP032(const FObjectInitializer& ObjectInitializer);

};

