#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P094.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP094 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP094(const FObjectInitializer& ObjectInitializer);

};

