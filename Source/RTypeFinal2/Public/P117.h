#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P117.generated.h"

class UObjectPoolActor;
class UP117DataAsset;

UCLASS(Blueprintable)
class AP117 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP117DataAsset* DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* GhostPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* EffPool;
    
public:
    AP117(const FObjectInitializer& ObjectInitializer);

};

