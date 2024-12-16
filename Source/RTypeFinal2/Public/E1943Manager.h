#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E1943Manager.generated.h"

class AE1943;
class UAudioComponent;

UCLASS(Blueprintable)
class AE1943Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE1943*> BoidActors;
    
public:
    AE1943Manager(const FObjectInitializer& ObjectInitializer);

};

