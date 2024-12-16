#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P048.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP048 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP048(const FObjectInitializer& ObjectInitializer);

};

