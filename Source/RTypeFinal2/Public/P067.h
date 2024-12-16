#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P067.generated.h"

class UP067DataAsset;

UCLASS(Blueprintable)
class AP067 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP067DataAsset* DataAsset;
    
public:
    AP067(const FObjectInitializer& ObjectInitializer);

};

