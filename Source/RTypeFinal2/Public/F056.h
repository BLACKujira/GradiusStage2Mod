#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F056.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class AF056 : public AForceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_UA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_LA;
    
public:
    AF056(const FObjectInitializer& ObjectInitializer);

};

