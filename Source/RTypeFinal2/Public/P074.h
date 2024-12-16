#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P074.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP074 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP074(const FObjectInitializer& ObjectInitializer);

};

