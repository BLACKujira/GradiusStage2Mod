#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1703.generated.h"

class AE1703_Child;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AE1703 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE1703_Child*> ChildArray;
    
public:
    AE1703(const FObjectInitializer& ObjectInitializer);

};

