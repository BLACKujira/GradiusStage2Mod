#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H039.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AH039 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ControlSE;
    
public:
    AH039(const FObjectInitializer& ObjectInitializer);

};

