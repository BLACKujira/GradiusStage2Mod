#pragma once
#include "CoreMinimal.h"
#include "E5605PartsParam.h"
#include "E5605BridgeParam.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UE5605BridgeParam : public UE5605PartsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BreakMesh;
    
    UE5605BridgeParam();

};

