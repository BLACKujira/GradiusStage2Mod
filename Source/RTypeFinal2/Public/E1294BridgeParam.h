#pragma once
#include "CoreMinimal.h"
#include "E1294PartsParam.h"
#include "E1294BridgeParam.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class UE1294BridgeParam : public UE1294PartsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BreakMesh;
    
    UE1294BridgeParam();

};

