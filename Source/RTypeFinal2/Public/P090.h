#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P090.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP090 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP090(const FObjectInitializer& ObjectInitializer);

};

