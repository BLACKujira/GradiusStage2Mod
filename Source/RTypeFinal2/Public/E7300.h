#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "MakedCellLine.h"
#include "E7300.generated.h"

UCLASS(Blueprintable)
class AE7300 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMakedCellLine> MakedCellLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CellCount;
    
public:
    AE7300(const FObjectInitializer& ObjectInitializer);

};

