#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P027.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP027 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP027(const FObjectInitializer& ObjectInitializer);

};

