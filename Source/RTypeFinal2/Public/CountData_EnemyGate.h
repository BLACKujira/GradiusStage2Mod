#pragma once
#include "CoreMinimal.h"
#include "CountData_Enemy.h"
#include "CountData_EnemyGate.generated.h"

UCLASS(Blueprintable)
class UCountData_EnemyGate : public UCountData_Enemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GateNo;
    
    UCountData_EnemyGate();

};

