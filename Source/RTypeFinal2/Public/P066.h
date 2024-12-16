#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P066.generated.h"

class UP066DataAsset;

UCLASS(Blueprintable)
class AP066 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP066DataAsset* DataAsset;
    
public:
    AP066(const FObjectInitializer& ObjectInitializer);

};

