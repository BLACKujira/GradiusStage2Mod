#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P060.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP060 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP060(const FObjectInitializer& ObjectInitializer);

};

