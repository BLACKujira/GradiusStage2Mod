#pragma once
#include "CoreMinimal.h"
#include "BS005Base.h"
#include "BS005B.generated.h"

class AEnemyActor;

UCLASS(Blueprintable)
class ABS005B : public ABS005Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    ABS005B(const FObjectInitializer& ObjectInitializer);

};

