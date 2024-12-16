#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P063.generated.h"

class UP063DataAsset;

UCLASS(Blueprintable)
class AP063 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP063DataAsset* DataAsset;
    
public:
    AP063(const FObjectInitializer& ObjectInitializer);

};

