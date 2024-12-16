#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P062.generated.h"

class UP062DataAsset;

UCLASS(Blueprintable)
class AP062 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP062DataAsset* DataAsset;
    
public:
    AP062(const FObjectInitializer& ObjectInitializer);

};

