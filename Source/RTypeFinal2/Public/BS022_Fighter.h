#pragma once
#include "CoreMinimal.h"
#include "BS022_BaitBase.h"
#include "BS022_Fighter.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class ABS022_Fighter : public ABS022_BaitBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentWaveCharge;
    
public:
    ABS022_Fighter(const FObjectInitializer& ObjectInitializer);

};

