#pragma once
#include "CoreMinimal.h"
#include "MBaseParam.h"
#include "EMXXXXParam.generated.h"

class AEPXXXX;

UCLASS(Blueprintable)
class UEMXXXXParam : public UMBaseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEPXXXX* ParentActor;
    
    UEMXXXXParam();

};

