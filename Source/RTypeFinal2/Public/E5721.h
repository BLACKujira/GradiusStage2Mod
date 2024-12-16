#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E5721.generated.h"

class UE5721Param;

UCLASS(Blueprintable)
class AE5721 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE5721Param* ParamE5721;
    
    AE5721(const FObjectInitializer& ObjectInitializer);

};

