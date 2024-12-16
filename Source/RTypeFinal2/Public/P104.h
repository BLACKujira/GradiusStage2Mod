#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P104.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP104 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP104(const FObjectInitializer& ObjectInitializer);

};

