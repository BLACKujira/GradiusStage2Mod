#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P022.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP022 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP022(const FObjectInitializer& ObjectInitializer);

};

