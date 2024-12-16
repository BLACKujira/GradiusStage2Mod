#pragma once
#include "CoreMinimal.h"
#include "E1512Children.h"
#include "EnemyActor.h"
#include "E1512.generated.h"

UCLASS(Blueprintable)
class AE1512 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FE1512Children> E1512Children;
    
public:
    AE1512(const FObjectInitializer& ObjectInitializer);

};

