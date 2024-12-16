#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P059.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP059 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP059(const FObjectInitializer& ObjectInitializer);

};

