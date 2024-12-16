#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F027.generated.h"

class UCapsuleComponent;
class UP001DataAsset;

UCLASS(Blueprintable)
class AF027 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_BS;
    
public:
    AF027(const FObjectInitializer& ObjectInitializer);

};

