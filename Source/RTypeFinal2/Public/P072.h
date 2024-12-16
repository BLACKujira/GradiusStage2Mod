#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P072.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP072 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP072(const FObjectInitializer& ObjectInitializer);

};

