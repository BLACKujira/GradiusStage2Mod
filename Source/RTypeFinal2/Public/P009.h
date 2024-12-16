#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P009.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AP009 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AP009(const FObjectInitializer& ObjectInitializer);

};

