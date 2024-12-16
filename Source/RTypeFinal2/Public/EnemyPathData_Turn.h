#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_TurnCmd.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Turn.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Turn : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPath_TurnCmd Cmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float angle;
    
    UEnemyPathData_Turn();

};

