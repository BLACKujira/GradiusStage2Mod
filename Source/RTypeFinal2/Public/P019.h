#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P019.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP019 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP019(const FObjectInitializer& ObjectInitializer);

};

