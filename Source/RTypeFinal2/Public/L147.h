#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L147.generated.h"

class UL147Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL147 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL147Env* Env;
    
public:
    AL147(const FObjectInitializer& ObjectInitializer);

};

