#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P028.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP028 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP028(const FObjectInitializer& ObjectInitializer);

};

