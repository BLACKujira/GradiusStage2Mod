#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E790_2.generated.h"

class UAudioComponent;
class UCountData_Enemy;

UCLASS(Blueprintable)
class AE790_2 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* InhaleSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCountData_Enemy* PowCountData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCountData_Enemy* E711CountData;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ExhaleSe[4];
    
public:
    AE790_2(const FObjectInitializer& ObjectInitializer);

};

