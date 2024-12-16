#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P045.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP045 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP045(const FObjectInitializer& ObjectInitializer);

};

