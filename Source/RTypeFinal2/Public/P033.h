#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P033.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP033 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP033(const FObjectInitializer& ObjectInitializer);

};

