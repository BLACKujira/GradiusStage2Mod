#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "S790H018.generated.h"

class AEnemyActor;
class US790H018DataAsset;

UCLASS(Blueprintable)
class AS790H018 : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    US790H018DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS790H018(const FObjectInitializer& ObjectInitializer);

};

