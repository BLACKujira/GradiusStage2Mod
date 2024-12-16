#pragma once
#include "CoreMinimal.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Path.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Path : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PathID;
    
    UEnemyPathData_Path();

};

