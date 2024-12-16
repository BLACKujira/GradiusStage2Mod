#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH038B.generated.h"

class UEnemyPathDataAsset;
class UEnemyPathPlayerComponent;

UCLASS(Blueprintable)
class AEH038B : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathDataAsset;
    
public:
    AEH038B(const FObjectInitializer& ObjectInitializer);

};

