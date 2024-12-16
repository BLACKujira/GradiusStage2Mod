#pragma once
#include "CoreMinimal.h"
#include "EParamBox.h"
#include "EParamCapsule.h"
#include "EnemyDifficultyInt32.h"
#include "EnemyParam.h"
#include "E3690Param.generated.h"

class UNiagaraSystem;
class USoundCue;
class UStaticMesh;

UCLASS(Blueprintable)
class UE3690Param : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDifficultyInt32 Life;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Defence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox Box_Collision_B[34];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamCapsule Capsule_Collision_B[34];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh_A[34];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh_B[34];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshChangeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DamagedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DeathSound;
    
    UE3690Param();

};

