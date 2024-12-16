#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "SWBase.generated.h"

class AActor;
class ALevelSequenceActor;
class ULevelSequencePlayer;
class UNiagaraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASWBase : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Body;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SM_Effects;
    
    ASWBase(const FObjectInitializer& ObjectInitializer);

};

