#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F041.generated.h"

class UCapsuleComponent;
class UF041DataAsset;

UCLASS(Blueprintable)
class AF041 : public AForceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_RING;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF041DataAsset* DataAssetF041;
    
public:
    AF041(const FObjectInitializer& ObjectInitializer);

};

