#pragma once
#include "CoreMinimal.h"
#include "GhostOnlinePlayer.h"
#include "ReplicateCoordinate.h"
#include "GhostOnlineForce.generated.h"

class UMaterialBillboardComponent;
class UMaterialInstanceDynamic;
class USceneComponent;

UCLASS(Blueprintable)
class AGhostOnlineForce : public AGhostOnlinePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BillboardRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    AGhostOnlineForce(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnReplicatedCoordinate(const FReplicateCoordinate& _currentValue);
    
};

