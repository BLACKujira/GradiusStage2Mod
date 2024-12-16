#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P001.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP001 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP001(const FObjectInitializer& ObjectInitializer);

};

