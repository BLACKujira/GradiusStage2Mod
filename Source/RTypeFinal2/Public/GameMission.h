#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EStageId.h"
#include "MissionInfo.h"
#include "GameMission.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameMission : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionInfo> MissionInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMissionIndex;
    
public:
    UGameMission();

    UFUNCTION(BlueprintCallable)
    void SetStageId(int32 _missionIndex, EStageId _stageId, int32 _gateNo);
    
    UFUNCTION(BlueprintCallable)
    void SetNextStageId(EStageId _stageId, int32 _gateNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMissionIndex(int32 _index);
    
    UFUNCTION(BlueprintCallable)
    void ResetMissionInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageId GetStageId(int32 _missionIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetNextStageId(EStageId& _stageId, int32& _gateNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionNo(int32 _missionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMissionInfo(FMissionInfo& _outInfo, int32 _missionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMissionIndexMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGateNo(int32 _missionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStageId GetCurrentStageId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMissionNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentMissionInfo(FMissionInfo& _outInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMissionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGateNo() const;
    
    UFUNCTION(BlueprintCallable)
    void AddMissionIndex();
    
};

