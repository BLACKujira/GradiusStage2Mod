#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_AnimCmd.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Anim.generated.h"

UCLASS(Blueprintable)
class UEnemyPathData_Anim : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPath_AnimCmd Cmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Data;
    
    UEnemyPathData_Anim();

};

