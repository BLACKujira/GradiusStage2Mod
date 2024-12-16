#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E1512SEManager.generated.h"

class AE1512;

UCLASS(Blueprintable)
class AE1512SEManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1512* BoidActor;
    
public:
    AE1512SEManager(const FObjectInitializer& ObjectInitializer);

};

