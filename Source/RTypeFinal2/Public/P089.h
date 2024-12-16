#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P089.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP089 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP089(const FObjectInitializer& ObjectInitializer);

};

