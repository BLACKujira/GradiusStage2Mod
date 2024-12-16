#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P024.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP024 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP024(const FObjectInitializer& ObjectInitializer);

};

