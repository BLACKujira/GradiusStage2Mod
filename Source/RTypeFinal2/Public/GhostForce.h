#pragma once
#include "CoreMinimal.h"
#include "GhostPlayer.h"
#include "GhostForce.generated.h"

class UMaterialBillboardComponent;
class UMaterialInstanceDynamic;
class USceneComponent;

UCLASS(Blueprintable)
class AGhostForce : public AGhostPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BillboardRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    AGhostForce(const FObjectInitializer& ObjectInitializer);

};

