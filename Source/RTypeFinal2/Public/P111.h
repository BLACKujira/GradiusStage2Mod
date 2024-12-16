#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P111.generated.h"

class UP111DataAsset;

UCLASS(Blueprintable)
class AP111 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP111DataAsset* DataAsset;
    
public:
    AP111(const FObjectInitializer& ObjectInitializer);

};

