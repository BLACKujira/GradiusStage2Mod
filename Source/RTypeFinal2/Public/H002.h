#pragma once
#include "CoreMinimal.h"
#include "EH002MiniSWMODE.h"
#include "HActor.h"
#include "H002.generated.h"

class ALevelSequenceActor;
class UH002DataAsset;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class AH002 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH002DataAsset* H002Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* MiniSW_SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* MiniSW_SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniSW_Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniSW_CollisionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EH002MiniSWMODE MiniSW_Mode;
    
public:
    AH002(const FObjectInitializer& ObjectInitializer);

};

