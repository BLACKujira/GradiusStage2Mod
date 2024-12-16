#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F030.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class AF030 : public AForceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_UA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_LA;
    
public:
    AF030(const FObjectInitializer& ObjectInitializer);

};

