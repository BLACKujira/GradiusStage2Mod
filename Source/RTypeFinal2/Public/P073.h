#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P073.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP073 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP073(const FObjectInitializer& ObjectInitializer);

};

