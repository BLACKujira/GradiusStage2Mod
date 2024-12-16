#pragma once
#include "CoreMinimal.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Move_Deg.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Move_Deg : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UEnemyPathData_Move_Deg();

};

