#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EGhostType.h"
#include "GhostPlayInfo.h"
#include "GhostScoreData.h"
#include "GhostManager.generated.h"

class AGhostPlayerBase;
class AGhostRecorder;
class UGhostConfigAsset;
class UGhostRecordData;

UCLASS(Blueprintable)
class UGhostManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGhostConfigAsset* ConfigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGhostType, AGhostRecorder*> Recorders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGhostRecordData*> RecordDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGhostPlayerBase*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGhostPlayInfo> PlayInfos;
    
public:
    UGhostManager();

private:
    UFUNCTION(BlueprintCallable)
    void DelegateRecordFinished(AGhostRecorder* _recorder);
    
public:
    UFUNCTION(BlueprintCallable)
    void BpStartPlay();
    
    UFUNCTION(BlueprintCallable)
    void BpSetupPlayRecords();
    
    UFUNCTION(BlueprintCallable)
    void BpGetScoresSortByPlayerIndex(int32 _arrayNum, TArray<FGhostScoreData>& _scores);
    
    UFUNCTION(BlueprintCallable)
    void BpGetScores(TArray<FGhostScoreData>& _scores);
    
    UFUNCTION(BlueprintCallable)
    bool BpConsumeRequestPlay();
    
};

