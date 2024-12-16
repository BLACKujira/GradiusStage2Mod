#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1511.generated.h"

class UEnemyPathDataAsset;
class UMeshComponent;

UCLASS(Blueprintable)
class AE1511 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEnemyActor*> PartsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* ParentMesh;
    
public:
    AE1511(const FObjectInitializer& ObjectInitializer);

};

