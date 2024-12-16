#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P087.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP087 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP087(const FObjectInitializer& ObjectInitializer);

};

