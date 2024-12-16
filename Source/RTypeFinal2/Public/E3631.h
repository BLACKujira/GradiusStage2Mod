#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3631.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AE3631 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE3631(const FObjectInitializer& ObjectInitializer);

};

