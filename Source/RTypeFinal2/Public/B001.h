#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B001.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AB001 : public ABitActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AB001(const FObjectInitializer& ObjectInitializer);

};

