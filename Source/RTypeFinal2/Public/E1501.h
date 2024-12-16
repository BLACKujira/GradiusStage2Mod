#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1501.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AE1501 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE1501(const FObjectInitializer& ObjectInitializer);

};

