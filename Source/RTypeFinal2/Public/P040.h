#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P040.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP040 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP040(const FObjectInitializer& ObjectInitializer);

};

