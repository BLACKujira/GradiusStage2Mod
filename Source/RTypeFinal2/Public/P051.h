#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P051.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP051 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP051(const FObjectInitializer& ObjectInitializer);

};

