#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "GhostCtrl.h"
#include "F068.generated.h"

class AF068G;
class UF068DataAsset;
class UObjectPoolActor;

UCLASS(Blueprintable)
class AF068 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF068DataAsset* DataAssetF068;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* GhostPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGhostCtrl GhostCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AF068G*> GhostUsed;
    
public:
    AF068(const FObjectInitializer& ObjectInitializer);

};

