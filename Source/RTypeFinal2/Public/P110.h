#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P110.generated.h"

class UP110DataAsset;

UCLASS(Blueprintable)
class AP110 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP110DataAsset* DataAsset;
    
public:
    AP110(const FObjectInitializer& ObjectInitializer);

};

