#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P023.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP023 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP023(const FObjectInitializer& ObjectInitializer);

};

