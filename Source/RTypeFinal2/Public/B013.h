#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B013.generated.h"

class UCapsuleComponent;
class UP001DataAsset;
class URicochetEnv;

UCLASS(Blueprintable)
class AB013 : public ABitActor {
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
    AB013(const FObjectInitializer& ObjectInitializer);

};

