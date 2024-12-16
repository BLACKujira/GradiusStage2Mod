#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P076.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP076 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP076(const FObjectInitializer& ObjectInitializer);

};

