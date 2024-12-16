#pragma once
#include "CoreMinimal.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Jump.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Jump : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Addr;
    
    UEnemyPathData_Jump();

};

