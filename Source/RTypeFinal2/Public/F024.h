#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F024.generated.h"

class UCapsuleComponent;
class UP001DataAsset;
class URicochetEnv;

UCLASS(Blueprintable)
class AF024 : public AForceActor {
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
    AF024(const FObjectInitializer& ObjectInitializer);

};

