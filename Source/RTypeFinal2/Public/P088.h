#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P088.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP088 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP088(const FObjectInitializer& ObjectInitializer);

};

