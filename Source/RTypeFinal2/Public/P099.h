#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P099.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP099 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP099(const FObjectInitializer& ObjectInitializer);

};

