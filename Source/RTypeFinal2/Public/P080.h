#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P080.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP080 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP080(const FObjectInitializer& ObjectInitializer);

};

