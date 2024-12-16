#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H048.generated.h"

class UEnemyPathPlayerComponent;

UCLASS(Blueprintable)
class AH048 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyPathPlayerComponent* PathPlayerComponent;
    
public:
    AH048(const FObjectInitializer& ObjectInitializer);

};

