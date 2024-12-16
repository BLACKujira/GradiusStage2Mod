#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P015.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP015 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP015(const FObjectInitializer& ObjectInitializer);

};

