#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H001P.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AH001P : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MountRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* nowRoot;
    
public:
    AH001P(const FObjectInitializer& ObjectInitializer);

};

