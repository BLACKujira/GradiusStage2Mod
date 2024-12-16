#pragma once
#include "CoreMinimal.h"
#include "EShooterPlayerPhase.h"
#include "MultiplayPlayerState.h"
#include "ShooterPlayerState.generated.h"

UCLASS(Blueprintable)
class AShooterPlayerState : public AMultiplayPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bSetup, meta=(AllowPrivateAccess=true))
    bool bSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerPhase, meta=(AllowPrivateAccess=true))
    EShooterPlayerPhase PlayerPhase;
    
public:
    AShooterPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bSetup();
    
};

