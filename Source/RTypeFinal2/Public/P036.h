#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P036.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP036 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP036(const FObjectInitializer& ObjectInitializer);

};

