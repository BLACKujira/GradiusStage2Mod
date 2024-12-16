#pragma once
#include "CoreMinimal.h"
#include "E28GameModeBase.h"
#include "E28GameMode_Shooter.generated.h"

class AScreenActor;
class UCockpitManager;
class UDemoEndManager;
class UEnemyManager;
class UMissionManager;
class UPointManager;
class UScrollManager;
class USoundManager;
class USplineManager;
class UStageManager;

UCLASS(Blueprintable, NonTransient)
class AE28GameMode_Shooter : public AE28GameModeBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGamePhaseDelegate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScreenActor* ScreenActor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePhaseDelegate OnGameStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamePhaseDelegate OnGameClear;
    
    AE28GameMode_Shooter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BpSetGameExit();
    
    UFUNCTION(BlueprintCallable)
    void BpSetDemo(bool _demo);
    
    UFUNCTION(BlueprintCallable)
    void BpSetCanSkip(bool _skip);
    
    UFUNCTION(BlueprintCallable)
    bool BpIsGameStart();
    
    UFUNCTION(BlueprintCallable)
    bool BpIsGameExit();
    
    UFUNCTION(BlueprintCallable)
    bool BpIsGameClearTimeup();
    
    UFUNCTION(BlueprintCallable)
    bool BpIsGameClear();
    
    UFUNCTION(BlueprintCallable)
    bool BpIsDemo();
    
    UFUNCTION(BlueprintCallable)
    bool BpIsCanSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStageManager* BpGetStageManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineManager* BpGetSplineManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundManager* BpGetSoundManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UScrollManager* BpGetScrollManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AScreenActor* BpGetScreenActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPointManager* BpGetPointManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMissionManager* BpGetMissionManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnemyManager* BpGetEnemyManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDemoEndManager* BpGetDemoEndManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCockpitManager* BpGetCockpitManager();
    
    UFUNCTION(BlueprintCallable)
    void BpGameStart();
    
    UFUNCTION(BlueprintCallable)
    void BpGameClearTimeup();
    
    UFUNCTION(BlueprintCallable)
    void BpGameClear();
    
    UFUNCTION(BlueprintCallable)
    void BpCockpitOn();
    
    UFUNCTION(BlueprintCallable)
    void BpCockpitOff();
    
    UFUNCTION(BlueprintCallable)
    void BpBossSceneStart();
    
    UFUNCTION(BlueprintCallable)
    void BpBossSceneEnd();
    
};

