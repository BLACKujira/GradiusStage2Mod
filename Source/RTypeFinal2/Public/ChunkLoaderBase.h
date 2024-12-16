#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EStageId.h"
#include "MissionInfo.h"
#include "PlatformChunkLoaderFinishedDelegateDelegate.h"
#include "ChunkLoaderBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AChunkLoaderBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformChunkLoaderFinishedDelegate OnFinished;
    
    AChunkLoaderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadByStageIdList(const TArray<EStageId>& _stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadByStageId(EStageId _stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadByMissionList(const TArray<FMissionInfo>& _missionList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadByChunkIdList(const TArray<int32>& _chunkIds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLoadByChunkId(int32 _chunkId);
    
};

