#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "Templates/SubclassOf.h"
#include "E3206Param.generated.h"

class AE3206Actor;
class USoundCue;

UCLASS(Blueprintable)
class UE3206Param : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AE3206Actor> BpActor0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AE3206Actor> BpActor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AE3206Actor> BpActor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DeathSound;
    
    UE3206Param();

};

