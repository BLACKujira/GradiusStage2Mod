#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P118.generated.h"

class UP118DataAsset;

UCLASS(Blueprintable)
class AP118 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP118DataAsset* DataAsset;
    
public:
    AP118(const FObjectInitializer& ObjectInitializer);

};

