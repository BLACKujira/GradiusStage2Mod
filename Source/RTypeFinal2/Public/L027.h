#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L027.generated.h"

class AKariShotEffect;
class UAudioComponent;
class UL027Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL027 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL027Env* Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKariShotEffect*> FireEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* ShotEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* HitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShotAudio;
    
public:
    AL027(const FObjectInitializer& ObjectInitializer);

};

