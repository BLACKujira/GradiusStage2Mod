#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P058.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP058 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP058(const FObjectInitializer& ObjectInitializer);

};

