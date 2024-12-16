#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P075.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP075 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP075(const FObjectInitializer& ObjectInitializer);

};

