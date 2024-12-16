#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P030.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP030 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP030(const FObjectInitializer& ObjectInitializer);

};

