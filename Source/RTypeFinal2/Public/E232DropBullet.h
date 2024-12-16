#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E232DropBullet.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AE232DropBullet : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE232DropBullet(const FObjectInitializer& ObjectInitializer);

};

