#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P092.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP092 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP092(const FObjectInitializer& ObjectInitializer);

};

