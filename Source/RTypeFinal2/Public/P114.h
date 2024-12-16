#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P114.generated.h"

class UP114DataAsset;

UCLASS(Blueprintable)
class AP114 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP114DataAsset* DataAsset;
    
public:
    AP114(const FObjectInitializer& ObjectInitializer);

};

