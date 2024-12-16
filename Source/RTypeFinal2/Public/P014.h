#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P014.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP014 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP014(const FObjectInitializer& ObjectInitializer);

};

