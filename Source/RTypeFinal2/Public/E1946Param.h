#pragma once
#include "CoreMinimal.h"
#include "EnemyParam.h"
#include "Templates/SubclassOf.h"
#include "E1946Param.generated.h"

class AE1946Body;

UCLASS(Blueprintable)
class UE1946Param : public UEnemyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AE1946Body> BpActor;
    
    UE1946Param();

};

