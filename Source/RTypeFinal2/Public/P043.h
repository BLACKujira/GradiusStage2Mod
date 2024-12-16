#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P043.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP043 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP043(const FObjectInitializer& ObjectInitializer);

};

