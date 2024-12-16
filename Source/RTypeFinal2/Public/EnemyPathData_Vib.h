#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_VibCmd.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Vib.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class UEnemyPathData_Vib : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPath_VibCmd Cmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedback;
    
    UEnemyPathData_Vib();

};

