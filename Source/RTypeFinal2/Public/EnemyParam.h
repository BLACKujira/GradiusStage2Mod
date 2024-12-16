#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "EnemyParam.generated.h"

class AEnemyActor;

UCLASS(Abstract, Blueprintable)
class UEnemyParam : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEnemyActor> ClassActor;
    
    UEnemyParam();

};

