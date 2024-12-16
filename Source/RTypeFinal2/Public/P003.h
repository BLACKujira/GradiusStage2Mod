#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P003.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP003 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP003(const FObjectInitializer& ObjectInitializer);

};

