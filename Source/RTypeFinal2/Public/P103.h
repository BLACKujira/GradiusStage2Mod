#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P103.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP103 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP103(const FObjectInitializer& ObjectInitializer);

};

