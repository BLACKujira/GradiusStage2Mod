#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "S790H044B.generated.h"

class AEnemyActor;
class US790H044DataAsset;

UCLASS(Blueprintable)
class AS790H044B : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    US790H044DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS790H044B(const FObjectInitializer& ObjectInitializer);

};

