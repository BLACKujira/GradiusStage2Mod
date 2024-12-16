#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F066.generated.h"

class UF066DataAsset;
class UObjectPoolActor;

UCLASS(Blueprintable)
class AF066 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF066DataAsset* DataAssetF066;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* SibukiPool;
    
public:
    AF066(const FObjectInitializer& ObjectInitializer);

};

