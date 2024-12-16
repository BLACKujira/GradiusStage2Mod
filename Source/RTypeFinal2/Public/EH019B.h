#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH019B.generated.h"

class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;

UCLASS(Blueprintable)
class AEH019B : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
public:
    AEH019B(const FObjectInitializer& ObjectInitializer);

};

