#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P100.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP100 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP100(const FObjectInitializer& ObjectInitializer);

};

