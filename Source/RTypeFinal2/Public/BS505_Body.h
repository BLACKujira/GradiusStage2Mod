#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS505_Body.generated.h"

class AActor;
class ABS505_BodyPart;
class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class ABS505_Body : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABS505_BodyPart*> ChildArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
public:
    ABS505_Body(const FObjectInitializer& ObjectInitializer);

};

