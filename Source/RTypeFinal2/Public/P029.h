#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P029.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP029 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP029(const FObjectInitializer& ObjectInitializer);

};

