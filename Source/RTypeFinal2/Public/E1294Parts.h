#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1294Parts.generated.h"

class AE1294;

UCLASS(Blueprintable)
class AE1294Parts : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1294* ParentE1294;
    
public:
    AE1294Parts(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetParentE1294(AE1294* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AE1294* GetParentE1294() const;
    
};

