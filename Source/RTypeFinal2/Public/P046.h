#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P046.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP046 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP046(const FObjectInitializer& ObjectInitializer);

};

