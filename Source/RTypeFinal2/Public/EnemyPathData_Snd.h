#pragma once
#include "CoreMinimal.h"
#include "EEnemyPath_SndCmd.h"
#include "EnemyPathData_Head.h"
#include "EnemyPathData_Snd.generated.h"

class USoundCue;

UCLASS(Blueprintable)
class UEnemyPathData_Snd : public UEnemyPathData_Head {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyPath_SndCmd Cmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Cue;
    
    UEnemyPathData_Snd();

};

