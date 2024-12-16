#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "H046DataAsset.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class UH046DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UEnemyPathDataAsset*> PathEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UH046DataAsset();

};

