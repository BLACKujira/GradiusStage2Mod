#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "S790H017.generated.h"

class AEnemyActor;
class US790H017DataAsset;

UCLASS(Blueprintable)
class AS790H017 : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    US790H017DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS790H017(const FObjectInitializer& ObjectInitializer);

};

