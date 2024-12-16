#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H021C.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class AH021C : public AHActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* CBody;
    
    AH021C(const FObjectInitializer& ObjectInitializer);

};

