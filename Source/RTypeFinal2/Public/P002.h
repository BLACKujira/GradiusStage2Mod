#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P002.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP002 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP002(const FObjectInitializer& ObjectInitializer);

};

