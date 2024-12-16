#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S1816.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AS1816 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AS1816(const FObjectInitializer& ObjectInitializer);

};

