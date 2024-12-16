#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3610.generated.h"

class UAudioComponent;
class UMeshComponent;

UCLASS(Blueprintable)
class AE3610 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioVernier;
    
public:
    AE3610(const FObjectInitializer& ObjectInitializer);

};

