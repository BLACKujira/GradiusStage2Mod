#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P082.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP082 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP082(const FObjectInitializer& ObjectInitializer);

};

