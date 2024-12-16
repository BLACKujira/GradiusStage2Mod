#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P083.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP083 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP083(const FObjectInitializer& ObjectInitializer);

};

