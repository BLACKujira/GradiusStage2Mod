#pragma once
#include "CoreMinimal.h"
#include "EItemType.h"
#include "EnemyActor.h"
#include "ItemInterface.h"
#include "I000.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class AI000 : public AEnemyActor, public IItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimFly;
    
    AI000(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EItemType GetItem();
    

    // Fix for true pure virtual functions not being implemented
};

