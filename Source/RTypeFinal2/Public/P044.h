#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P044.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP044 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP044(const FObjectInitializer& ObjectInitializer);

};

