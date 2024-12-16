#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B010.generated.h"

class UP001DataAsset;

UCLASS(Blueprintable)
class AB010 : public ABitActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AB010(const FObjectInitializer& ObjectInitializer);

};

