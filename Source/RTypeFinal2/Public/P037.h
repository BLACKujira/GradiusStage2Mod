#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P037.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP037 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP037(const FObjectInitializer& ObjectInitializer);

};

