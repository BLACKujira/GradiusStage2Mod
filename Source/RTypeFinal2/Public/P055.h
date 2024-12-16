#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P055.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP055 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP055(const FObjectInitializer& ObjectInitializer);

};

