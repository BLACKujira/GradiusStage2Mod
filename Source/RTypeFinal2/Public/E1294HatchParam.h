#pragma once
#include "CoreMinimal.h"
#include "E1294PartsParam.h"
#include "E1294HatchParam.generated.h"

class US1294MissileParam;
class USoundCue;

UCLASS(Blueprintable)
class UE1294HatchParam : public UE1294PartsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileFireDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HatchCloseWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    US1294MissileParam* MissileParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* HatchOpenSound;
    
    UE1294HatchParam();

};

