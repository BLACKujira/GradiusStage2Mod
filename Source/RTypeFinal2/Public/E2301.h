#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2301.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AE2301 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CellSceneComponent;
    
public:
    AE2301(const FObjectInitializer& ObjectInitializer);

};

