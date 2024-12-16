#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P085.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP085 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP085(const FObjectInitializer& ObjectInitializer);

};

