#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7705.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AE7705 : public AEnemyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RightSceneComponent;
    
public:
    AE7705(const FObjectInitializer& ObjectInitializer);

};

