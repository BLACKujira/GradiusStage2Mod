#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P004.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP004 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP004(const FObjectInitializer& ObjectInitializer);

};

