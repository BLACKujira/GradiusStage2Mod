#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P107.generated.h"

class UP107DataAsset;

UCLASS(Blueprintable)
class AP107 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP107DataAsset* DataAsset;
    
public:
    AP107(const FObjectInitializer& ObjectInitializer);

};

