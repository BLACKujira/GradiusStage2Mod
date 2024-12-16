#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS022_Tentacle.generated.h"

class ABS022_BaitBase;
class USplineComponent;

UCLASS(Blueprintable)
class ABS022_Tentacle : public AEnemyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABS022_BaitBase* BaitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ABS022_Tentacle(const FObjectInitializer& ObjectInitializer);

};

