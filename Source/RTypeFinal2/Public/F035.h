#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F035.generated.h"

class UCapsuleComponent;
class UP001DataAsset;
class URicochetEnv;

UCLASS(Blueprintable)
class AF035 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_BS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URicochetEnv* RicochetEnv;
    
public:
    AF035(const FObjectInitializer& ObjectInitializer);

};

