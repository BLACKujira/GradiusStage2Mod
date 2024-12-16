#pragma once
#include "CoreMinimal.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Flag.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Flag : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Data;
    
    UEnemyPathData_Flag();

};

