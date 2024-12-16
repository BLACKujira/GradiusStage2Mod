#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S5206.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class AS5206 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AS5206(const FObjectInitializer& ObjectInitializer);

};

