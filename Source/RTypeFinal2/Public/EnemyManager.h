#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EnemyDifficultyData.h"
#include "EnemyManageData.h"
#include "EnemyManagePool.h"
#include "EnemyManager.generated.h"

class AEnemyActor;
class AEnemyCommonPreProcActor;
class UEnemyClassDataAsset;
class UEnemyClassNumAsset;
class UEnemyConfigAsset;

UCLASS(Blueprintable)
class UEnemyManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FEnemyManagePool> ActorPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyConfigAsset* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyClassDataAsset* ClassData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyClassNumAsset* ClassNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyClassNumAsset* ClassNumOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyCommonPreProcActor* PreActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEnemyActor*> UnmanagedActor;
    
public:
    UEnemyManager();

    UFUNCTION(BlueprintCallable)
    void GetDifficultyData(FEnemyDifficultyData& _outDifficultyData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AEnemyActor*> GetActorsUsed();
    
    UFUNCTION(BlueprintCallable)
    void DestroyEnemyNew(bool _force);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyEnemyMultiFrame(bool _force, bool _init, float _intervalMs);
    
    UFUNCTION(BlueprintCallable)
    void DestroyEnemy(bool _force);
    
    UFUNCTION(BlueprintCallable)
    void DestroyActorPoolsNew();
    
    UFUNCTION(BlueprintCallable)
    void DestroyActorPools();
    
    UFUNCTION(BlueprintCallable)
    void CreateActorPools(const TArray<FEnemyManageData>& _manageDatas, UEnemyClassNumAsset* _overrideClassNum);
    
};

