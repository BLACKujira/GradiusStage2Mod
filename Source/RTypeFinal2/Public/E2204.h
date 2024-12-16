#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2204.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class AE2204 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
public:
    AE2204(const FObjectInitializer& ObjectInitializer);

};

