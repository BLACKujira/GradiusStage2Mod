#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS013Bullet.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class ABS013Bullet : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    ABS013Bullet(const FObjectInitializer& ObjectInitializer);

};

