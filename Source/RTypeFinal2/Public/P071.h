#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P071.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP071 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP071(const FObjectInitializer& ObjectInitializer);

};

