#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P025.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP025 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP025(const FObjectInitializer& ObjectInitializer);

};

