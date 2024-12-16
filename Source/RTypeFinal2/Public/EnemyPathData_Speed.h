#pragma once
#include "CoreMinimal.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Speed.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Speed : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UEnemyPathData_Speed();

};

