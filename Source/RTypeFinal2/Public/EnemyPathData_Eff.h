#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_EffCmd.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Eff.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UEnemyPathData_Eff : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPath_EffCmd Cmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Eff;
    
    UEnemyPathData_Eff();

};

