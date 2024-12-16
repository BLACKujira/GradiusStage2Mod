#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "S790H044.generated.h"

class AEnemyActor;
class US790H044DataAsset;

UCLASS(Blueprintable)
class AS790H044 : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    US790H044DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS790H044(const FObjectInitializer& ObjectInitializer);

};

