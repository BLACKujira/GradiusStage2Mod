#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH001P.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AEH001P : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MountRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* nowRoot;
    
public:
    AEH001P(const FObjectInitializer& ObjectInitializer);

};

