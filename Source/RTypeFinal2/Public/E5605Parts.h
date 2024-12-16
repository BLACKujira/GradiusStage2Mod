#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E5605Parts.generated.h"

class AE5605;

UCLASS(Blueprintable)
class AE5605Parts : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE5605* ParentE5605;
    
public:
    AE5605Parts(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetParentE5605(AE5605* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AE5605* GetParentE5605() const;
    
};

