#pragma once
#include "CoreMinimal.h"
#include "GhostPlayer.h"
#include "GhostAircraft.generated.h"

class UMaterialBillboardComponent;
class UMaterialInstanceDynamic;
class USceneComponent;

UCLASS(Blueprintable)
class AGhostAircraft : public AGhostPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BillboardRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    AGhostAircraft(const FObjectInitializer& ObjectInitializer);

};

