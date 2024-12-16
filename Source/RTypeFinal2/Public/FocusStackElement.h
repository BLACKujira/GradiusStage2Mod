#pragma once
#include "CoreMinimal.h"
#include "FocusStackElement.generated.h"

class UObject;
class UUserWidget;

USTRUCT(BlueprintType)
struct FFocusStackElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Obj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* UMG;
    
    RTYPEFINAL2_API FFocusStackElement();
};

