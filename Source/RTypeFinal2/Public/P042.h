#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P042.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP042 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP042(const FObjectInitializer& ObjectInitializer);

};

