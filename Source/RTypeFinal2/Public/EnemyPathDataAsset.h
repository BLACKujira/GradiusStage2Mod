#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyPathDataAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class UEnemyPathDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CommandDatas;
    
    UEnemyPathDataAsset();

};

