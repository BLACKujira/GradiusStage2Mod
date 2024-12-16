#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P093.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP093 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP093(const FObjectInitializer& ObjectInitializer);

};

