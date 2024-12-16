#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EF057GParam.generated.h"

class AEF057;

UCLASS(Blueprintable)
class UEF057GParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEF057* Parent;
    
    UEF057GParam();

};

