#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F040.generated.h"

class UP001DataAsset;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AF040 : public AForceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ShadowUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ShadowBases;
    
public:
    AF040(const FObjectInitializer& ObjectInitializer);

};

