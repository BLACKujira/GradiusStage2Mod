#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS013Laser.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class ABS013Laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    ABS013Laser(const FObjectInitializer& ObjectInitializer);

};

