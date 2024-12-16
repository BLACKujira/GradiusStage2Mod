#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P008.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP008 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP008(const FObjectInitializer& ObjectInitializer);

};

