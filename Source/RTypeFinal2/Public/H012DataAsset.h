#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "Templates/SubclassOf.h"
#include "H012DataAsset.generated.h"

class UScopeWidget;

UCLASS(Blueprintable)
class UH012DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScopeWidget> ScopeWidget;
    
    UH012DataAsset();

};

