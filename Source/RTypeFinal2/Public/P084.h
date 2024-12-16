#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P084.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP084 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP084(const FObjectInitializer& ObjectInitializer);

};

