#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P038.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP038 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP038(const FObjectInitializer& ObjectInitializer);

};

