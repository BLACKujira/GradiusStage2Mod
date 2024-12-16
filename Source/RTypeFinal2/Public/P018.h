#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P018.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP018 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP018(const FObjectInitializer& ObjectInitializer);

};

