#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E7703Manager.generated.h"

class AE7703;
class UAudioComponent;

UCLASS(Blueprintable)
class AE7703Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE7703*> BoidActors;
    
public:
    AE7703Manager(const FObjectInitializer& ObjectInitializer);

};

