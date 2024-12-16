#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EF034GParam.generated.h"

class AEF034;

UCLASS(Blueprintable)
class UEF034GParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEF034* Parent;
    
    UEF034GParam();

};

