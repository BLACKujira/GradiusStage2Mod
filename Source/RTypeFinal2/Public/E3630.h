#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3630.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AE3630 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE3630(const FObjectInitializer& ObjectInitializer);

};

