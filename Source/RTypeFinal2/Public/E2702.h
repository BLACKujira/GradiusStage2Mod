#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2702.generated.h"

class AE2702Cannon;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AE2702 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE2702Cannon*> ChildArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponent;
    
public:
    AE2702(const FObjectInitializer& ObjectInitializer);

};

