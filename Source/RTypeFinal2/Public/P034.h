#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P034.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP034 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP034(const FObjectInitializer& ObjectInitializer);

};

