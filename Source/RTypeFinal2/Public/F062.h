#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F062.generated.h"

class UF062DataAsset;
class UMBaseEnv;

UCLASS(Blueprintable)
class AF062 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF062DataAsset* DataAssetF062;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMBaseEnv* MisEnv;
    
public:
    AF062(const FObjectInitializer& ObjectInitializer);

};

