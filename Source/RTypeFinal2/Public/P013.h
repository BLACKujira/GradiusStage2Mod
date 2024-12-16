#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P013.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP013 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP013(const FObjectInitializer& ObjectInitializer);

};

