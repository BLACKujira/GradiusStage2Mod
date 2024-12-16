#pragma once
#include "CoreMinimal.h"
#include "H000DataAsset.h"
#include "Templates/SubclassOf.h"
#include "H012_3DataAsset.generated.h"

class UEnemyPathDataAsset;
class UTMarkWidget;

UCLASS(Blueprintable)
class UH012_3DataAsset : public UH000DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTMarkWidget> TMarkWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UEnemyPathDataAsset*> PathEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed;
    
    UH012_3DataAsset();

};

