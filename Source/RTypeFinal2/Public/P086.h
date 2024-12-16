#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P086.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP086 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP086(const FObjectInitializer& ObjectInitializer);

};

