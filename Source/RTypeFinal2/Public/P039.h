#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P039.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP039 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP039(const FObjectInitializer& ObjectInitializer);

};

