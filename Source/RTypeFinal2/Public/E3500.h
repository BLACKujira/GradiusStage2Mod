#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3500.generated.h"

class AE3500;

UCLASS(Blueprintable)
class AE3500 : public AEnemyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE3500*> ChildArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE3500(const FObjectInitializer& ObjectInitializer);

};

