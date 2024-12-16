#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P116.generated.h"

class UP116DataAsset;

UCLASS(Blueprintable)
class AP116 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP116DataAsset* DataAsset;
    
public:
    AP116(const FObjectInitializer& ObjectInitializer);

};

