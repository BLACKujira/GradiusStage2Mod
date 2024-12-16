#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P057.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP057 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP057(const FObjectInitializer& ObjectInitializer);

};

