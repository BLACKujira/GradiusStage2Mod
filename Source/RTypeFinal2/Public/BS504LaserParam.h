#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "Templates/SubclassOf.h"
#include "BS504LaserParam.generated.h"

class AL001Actor;
class UBS504LaserColParam;
class UNiagaraSystem;
class USoundCue;

UCLASS(Blueprintable)
class UBS504LaserParam : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AL001Actor> BpActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBS504LaserColParam* ColParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SphereEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* LaserShotSound;
    
    UBS504LaserParam();

};

