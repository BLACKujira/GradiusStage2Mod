#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E5303Parts.generated.h"

class AE5303;

UCLASS(Blueprintable)
class AE5303Parts : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE5303* ParentE5303;
    
public:
    AE5303Parts(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetParentE5303(AE5303* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AE5303* GetParentE5303() const;
    
};

