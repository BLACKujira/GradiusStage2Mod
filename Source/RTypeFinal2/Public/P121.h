#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P121.generated.h"

class UP121DataAsset;

UCLASS(Blueprintable)
class AP121 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP121DataAsset* DataAsset;
    
public:
    AP121(const FObjectInitializer& ObjectInitializer);

};

