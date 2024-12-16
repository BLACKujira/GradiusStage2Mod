#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P031.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP031 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP031(const FObjectInitializer& ObjectInitializer);

};

