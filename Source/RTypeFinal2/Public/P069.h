#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P069.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP069 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP069(const FObjectInitializer& ObjectInitializer);

};

