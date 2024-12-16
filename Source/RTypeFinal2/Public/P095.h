#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P095.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP095 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP095(const FObjectInitializer& ObjectInitializer);

};

