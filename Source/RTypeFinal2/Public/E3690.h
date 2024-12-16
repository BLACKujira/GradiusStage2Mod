#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3690.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AE3690 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* Vernier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE3690(const FObjectInitializer& ObjectInitializer);

};

