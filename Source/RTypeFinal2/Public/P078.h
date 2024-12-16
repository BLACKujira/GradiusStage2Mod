#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P078.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP078 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP078(const FObjectInitializer& ObjectInitializer);

};

