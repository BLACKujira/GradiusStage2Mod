#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS015_Shock.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABS015_Shock : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponent;
    
public:
    ABS015_Shock(const FObjectInitializer& ObjectInitializer);

};

