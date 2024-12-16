#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B004.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AB004 : public ABitActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AB004(const FObjectInitializer& ObjectInitializer);

};

