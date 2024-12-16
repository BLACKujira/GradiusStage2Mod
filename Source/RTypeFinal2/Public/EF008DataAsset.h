#pragma once
#include "CoreMinimal.h"
#include "EnemyCollisionData.h"
#include "EnemyDifficultyFloat.h"
#include "F001DataAsset.h"
#include "EF008DataAsset.generated.h"

UCLASS(Blueprintable)
class UEF008DataAsset : public UF001DataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDifficultyFloat RotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDifficultyFloat ROT_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDifficultyFloat MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDifficultyFloat MOVE_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyCollisionData> Berserk_ForceCollisionDataA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyCollisionData> Berserk_ForceCollisionDataB;
    
    UEF008DataAsset();

};

