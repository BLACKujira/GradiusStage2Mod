#pragma once
#include "CoreMinimal.h"
#include "E5720Parts.h"
#include "EnemyActor.h"
#include "E5720.generated.h"

class UEnemyLocus;

UCLASS(Blueprintable)
class AE5720 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FE5720Parts> PartsWorks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyLocus* EnemyLocus;
    
    AE5720(const FObjectInitializer& ObjectInitializer);

};

