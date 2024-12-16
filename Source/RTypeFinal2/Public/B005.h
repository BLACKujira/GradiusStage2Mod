#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B005.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AB005 : public ABitActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AB005(const FObjectInitializer& ObjectInitializer);

};

