#pragma once
#include "CoreMinimal.h"
#include "BiteEnv.generated.h"

class AActor;
class AKariShotEffect;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FBiteEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TgtA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TgtC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* BiteEffect;
    
    RTYPEFINAL2_API FBiteEnv();
};

