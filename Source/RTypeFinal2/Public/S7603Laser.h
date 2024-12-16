#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceExport.h"
#include "EnemyActor.h"
#include "S7603Laser.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AS7603Laser : public AEnemyActor, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentBeam;
    
public:
    AS7603Laser(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

