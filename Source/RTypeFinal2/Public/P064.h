#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P064.generated.h"

class UP064DataAsset;

UCLASS(Blueprintable)
class AP064 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP064DataAsset* DataAsset;
    
public:
    AP064(const FObjectInitializer& ObjectInitializer);

};

