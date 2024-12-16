#pragma once
#include "CoreMinimal.h"
#include "EParamBox.h"
#include "ElcPointParam.h"
#include "EnemyParam.h"
#include "E2551Param.generated.h"

class UNiagaraSystem;
class US2501_yellowParam;
class USkeletalMesh;

UCLASS(Blueprintable)
class UE2551Param : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BodyMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox CollisionC[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FElcPointParam ElcPoints[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ElcPointEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ElcLineEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    US2501_yellowParam* AS2501_yellow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UE2551Param();

};

