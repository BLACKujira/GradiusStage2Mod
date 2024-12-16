#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P105.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP105 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP105(const FObjectInitializer& ObjectInitializer);

};

