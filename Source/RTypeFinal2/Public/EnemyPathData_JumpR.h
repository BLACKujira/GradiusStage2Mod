#pragma once
#include "CoreMinimal.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_JumpR.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_JumpR : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 RAddr;
    
    UEnemyPathData_JumpR();

};

