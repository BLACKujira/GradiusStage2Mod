#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P054.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP054 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP054(const FObjectInitializer& ObjectInitializer);

};

