#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "E7456Param.generated.h"

class USoundCue;

UCLASS(Blueprintable)
class UE7456Param : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UE7456Param();

};

