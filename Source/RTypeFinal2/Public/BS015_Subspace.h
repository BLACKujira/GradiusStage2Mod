#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS015_Subspace.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABS015_Subspace : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponent;
    
public:
    ABS015_Subspace(const FObjectInitializer& ObjectInitializer);

};

