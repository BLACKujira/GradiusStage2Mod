#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E5404.generated.h"

class AE5404_laser;
class UAudioComponent;

UCLASS(Blueprintable)
class AE5404 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE5404_laser*> LaserActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentLaserSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentLaserShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentVernier;
    
public:
    AE5404(const FObjectInitializer& ObjectInitializer);

};

