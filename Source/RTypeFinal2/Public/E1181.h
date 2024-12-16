#pragma once
#include "CoreMinimal.h"
#include "E1181Bone.h"
#include "ESplineCmd_HitFlag.h"
#include "EnemyActor.h"
#include "E1181.generated.h"

class AE1181;
class AS1181Lightning;
class AS1181Whip;
class UEnemyLocus;
class UMaterialInstanceDynamic;
class USplineCmdPlayer;

UCLASS(Blueprintable)
class AE1181 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1181* PairActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineCmdPlayer* SplineCmdPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AS1181Whip* PtrWhip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AS1181Lightning* PtrLightning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FE1181Bone> BoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyLocus* EnemyLocus;
    
public:
    AE1181(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCmdHit(ESplineCmd_HitFlag _hitFlags);
    
};

