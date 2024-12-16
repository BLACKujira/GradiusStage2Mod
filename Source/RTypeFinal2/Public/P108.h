#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P108.generated.h"

class UP108DataAsset;

UCLASS(Blueprintable)
class AP108 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP108DataAsset* DataAsset;
    
public:
    AP108(const FObjectInitializer& ObjectInitializer);

};

