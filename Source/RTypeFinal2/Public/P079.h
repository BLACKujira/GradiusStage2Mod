#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P079.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP079 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP079(const FObjectInitializer& ObjectInitializer);

};

