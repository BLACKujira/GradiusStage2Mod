#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B002.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AB002 : public ABitActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AB002(const FObjectInitializer& ObjectInitializer);

};

