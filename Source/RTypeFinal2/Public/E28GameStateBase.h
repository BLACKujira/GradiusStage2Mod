#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "E28GameStateBase.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class AE28GameStateBase : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumStartPlayer, meta=(AllowPrivateAccess=true))
    int32 NumStartPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> LoginPlayerArray;
    
public:
    AE28GameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetNumStartPlayer(int32 _num);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLoginPlayer(APlayerState* _playerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NumStartPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumStartPlayer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventRemovedPlayerState(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMatchIsWaitingToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMatchHasStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventMatchHasEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventLeavingMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventAddedPlayerState(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddLoginPlayer(APlayerState* _playerState);
    
};

