#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P070.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP070 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP070(const FObjectInitializer& ObjectInitializer);

};

