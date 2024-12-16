#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P041.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP041 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP041(const FObjectInitializer& ObjectInitializer);

};

