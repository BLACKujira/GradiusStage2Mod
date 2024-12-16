#pragma once
#include "CoreMinimal.h"
#include "E1294Parts.h"
#include "E1294Bridge.generated.h"

class UE1294BridgeParam;

UCLASS(Blueprintable)
class AE1294Bridge : public AE1294Parts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapObjectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1294BridgeParam* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySerialNo;
    
public:
    AE1294Bridge(const FObjectInitializer& ObjectInitializer);

};

