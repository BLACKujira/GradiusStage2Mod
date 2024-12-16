#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P097.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP097 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP097(const FObjectInitializer& ObjectInitializer);

};

