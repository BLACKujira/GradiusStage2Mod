#pragma once
#include "CoreMinimal.h"
#include "EItemType.h"
#include "EnemyActor.h"
#include "ItemInterface.h"
#include "I002.generated.h"

class AI002;

UCLASS(Blueprintable)
class AI002 : public AEnemyActor, public IItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AI002*> OtherItems;
    
    AI002(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EItemType GetItem();
    

    // Fix for true pure virtual functions not being implemented
};

