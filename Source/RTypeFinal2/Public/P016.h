#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P016.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP016 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP016(const FObjectInitializer& ObjectInitializer);

};

