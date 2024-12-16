#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H017P.generated.h"

class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;

UCLASS(Blueprintable)
class AH017P : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
public:
    AH017P(const FObjectInitializer& ObjectInitializer);

};

