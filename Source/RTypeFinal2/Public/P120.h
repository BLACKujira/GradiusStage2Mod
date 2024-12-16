#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P120.generated.h"

class UP120DataAsset;

UCLASS(Blueprintable)
class AP120 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP120DataAsset* DataAsset;
    
public:
    AP120(const FObjectInitializer& ObjectInitializer);

};

