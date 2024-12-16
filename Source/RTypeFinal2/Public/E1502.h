#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1502.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AE1502 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE1502(const FObjectInitializer& ObjectInitializer);

};

