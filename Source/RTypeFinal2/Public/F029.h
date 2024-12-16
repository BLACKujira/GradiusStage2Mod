#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F029.generated.h"

class UObjectPoolActor;
class UP001DataAsset;

UCLASS(Blueprintable)
class AF029 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* GhostPool;
    
public:
    AF029(const FObjectInitializer& ObjectInitializer);

};

