#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "S790H017P.generated.h"

class AEnemyActor;
class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;
class US790H017DataAsset;

UCLASS(Blueprintable)
class AS790H017P : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    US790H017DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS790H017P(const FObjectInitializer& ObjectInitializer);

};

