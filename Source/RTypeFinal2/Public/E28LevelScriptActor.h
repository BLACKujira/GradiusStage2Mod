#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "EStageId.h"
#include "Templates/SubclassOf.h"
#include "E28LevelScriptActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class AE28LevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ClassStageLoader;
    
public:
    AE28LevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StageMidBossClearEvent();
    
    UFUNCTION(BlueprintCallable)
    void StageLoad();
    
    UFUNCTION(BlueprintCallable)
    void StageInit(EStageId _stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StageClearEventStart();
    
    UFUNCTION(BlueprintCallable)
    void StageClearEventEnd();
    
};

