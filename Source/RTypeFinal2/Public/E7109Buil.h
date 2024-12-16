#pragma once
#include "CoreMinimal.h"
#include "EParamBox.h"
#include "EnemyActor.h"
#include "E7109Buil.generated.h"

class UNiagaraSystem;
class USoundCue;

UCLASS(Blueprintable)
class AE7109Buil : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEParamBox Buil_CollisionC[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathEffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BreakSound;
    
    AE7109Buil(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil5_End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil5_broken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil4_End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil4_broken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil3_End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil3_broken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil2_End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil2_broken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil1_End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Buil1_broken();
    
};

