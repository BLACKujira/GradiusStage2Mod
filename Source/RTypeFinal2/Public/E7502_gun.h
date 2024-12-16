#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7502_gun.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AE7502_gun : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE7502_gun(const FObjectInitializer& ObjectInitializer);

};

