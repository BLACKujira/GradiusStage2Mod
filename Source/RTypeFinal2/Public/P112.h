#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P112.generated.h"

class UP112DataAsset;

UCLASS(Blueprintable)
class AP112 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP112DataAsset* DataAsset;
    
public:
    AP112(const FObjectInitializer& ObjectInitializer);

};

