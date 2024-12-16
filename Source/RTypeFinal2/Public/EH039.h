#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH039.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AEH039 : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ControlSE;
    
public:
    AEH039(const FObjectInitializer& ObjectInitializer);

};

