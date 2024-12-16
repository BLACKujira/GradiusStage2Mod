#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P007.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP007 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP007(const FObjectInitializer& ObjectInitializer);

};

