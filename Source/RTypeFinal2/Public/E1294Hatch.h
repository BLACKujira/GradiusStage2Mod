#pragma once
#include "CoreMinimal.h"
#include "E1294Parts.h"
#include "E1294Hatch.generated.h"

class UE1294HatchParam;

UCLASS(Blueprintable)
class AE1294Hatch : public AE1294Parts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapObjectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1294HatchParam* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySerialNo;
    
public:
    AE1294Hatch(const FObjectInitializer& ObjectInitializer);

};

