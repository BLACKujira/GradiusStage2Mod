#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L142.generated.h"

class AKariShotEffect;
class UAudioComponent;
class UL142Env;
class UPoseableMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL142 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* Po_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL142Env* Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKariShotEffect*> HitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShotAudio;
    
public:
    AL142(const FObjectInitializer& ObjectInitializer);

};

