#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P096.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP096 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP096(const FObjectInitializer& ObjectInitializer);

};

