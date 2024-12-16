#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P021.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP021 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP021(const FObjectInitializer& ObjectInitializer);

};

