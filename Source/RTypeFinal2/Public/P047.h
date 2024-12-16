#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P047.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP047 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP047(const FObjectInitializer& ObjectInitializer);

};

