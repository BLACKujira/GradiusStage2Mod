#pragma once
#include "CoreMinimal.h"
#include "E5303PartsParam.h"
#include "E5303BridgeParam.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UE5303BridgeParam : public UE5303PartsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BreakMesh;
    
    UE5303BridgeParam();

};

