#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H018Tornado.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AH018Tornado : public AHActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShotAudio;
    
public:
    AH018Tornado(const FObjectInitializer& ObjectInitializer);

};

