#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P053.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP053 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP053(const FObjectInitializer& ObjectInitializer);

};

