#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P109.generated.h"

class UP109DataAsset;

UCLASS(Blueprintable)
class AP109 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP109DataAsset* DataAsset;
    
public:
    AP109(const FObjectInitializer& ObjectInitializer);

};

