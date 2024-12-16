#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P052.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP052 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP052(const FObjectInitializer& ObjectInitializer);

};

