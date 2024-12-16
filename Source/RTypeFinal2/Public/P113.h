#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P113.generated.h"

class UP113DataAsset;

UCLASS(Blueprintable)
class AP113 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP113DataAsset* DataAsset;
    
public:
    AP113(const FObjectInitializer& ObjectInitializer);

};

