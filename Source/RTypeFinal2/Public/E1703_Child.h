#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1703_Child.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AE1703_Child : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE1703_Child(const FObjectInitializer& ObjectInitializer);

};

