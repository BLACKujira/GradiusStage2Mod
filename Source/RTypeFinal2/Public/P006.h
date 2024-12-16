#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P006.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP006 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP006(const FObjectInitializer& ObjectInitializer);

};

