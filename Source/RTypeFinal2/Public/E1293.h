#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1293.generated.h"

class UE1293Param;

UCLASS(Blueprintable)
class AE1293 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapObjectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1293Param* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySerialNo;
    
public:
    AE1293(const FObjectInitializer& ObjectInitializer);

};

