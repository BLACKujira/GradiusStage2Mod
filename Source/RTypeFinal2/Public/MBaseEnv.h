#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MBaseEnv.generated.h"

class AAircraftBasePawn;
class AForceActor;

UCLASS(Blueprintable)
class UMBaseEnv : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAircraftBasePawn* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AForceActor* OwnerForce;
    
    UMBaseEnv();

};

