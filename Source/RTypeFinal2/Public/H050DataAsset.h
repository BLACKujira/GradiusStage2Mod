#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "Templates/SubclassOf.h"
#include "H050DataAsset.generated.h"

class AEndingDriver;
class UUserWidget;

UCLASS(Blueprintable)
class UH050DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> EndingWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEndingDriver> EndingSubClass;
    
    UH050DataAsset();

};

