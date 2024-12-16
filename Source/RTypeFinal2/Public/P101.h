#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P101.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP101 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP101(const FObjectInitializer& ObjectInitializer);

};

