#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P081.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP081 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP081(const FObjectInitializer& ObjectInitializer);

};

