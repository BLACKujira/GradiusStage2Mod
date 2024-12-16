#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P017.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP017 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP017(const FObjectInitializer& ObjectInitializer);

};

