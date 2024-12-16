#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P012.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP012 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP012(const FObjectInitializer& ObjectInitializer);

};

