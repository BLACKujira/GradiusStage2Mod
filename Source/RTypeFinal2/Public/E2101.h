#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2101.generated.h"

class AE2101_BODY;
class ASplineActor;
class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AE2101 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE2101_BODY*> ChildArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE2101_BODY* ChildTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
public:
    AE2101(const FObjectInitializer& ObjectInitializer);

};

