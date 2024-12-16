#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EF058GParam.generated.h"

class AEF058;

UCLASS(Blueprintable)
class UEF058GParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEF058* Parent;
    
    UEF058GParam();

};

