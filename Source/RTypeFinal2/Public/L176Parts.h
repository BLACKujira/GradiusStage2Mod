#pragma once
#include "CoreMinimal.h"
#include "L176Parts.generated.h"

class AKariShotEffect;
class USceneComponent;
class USphereComponent;

USTRUCT(BlueprintType)
struct FL176Parts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* NS_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Collision_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BodyEff;
    
    RTYPEFINAL2_API FL176Parts();
};

