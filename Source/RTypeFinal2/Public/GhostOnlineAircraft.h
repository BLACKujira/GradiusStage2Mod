#pragma once
#include "CoreMinimal.h"
#include "GhostOnlinePlayer.h"
#include "ReplicateCoordinateAndScore.h"
#include "GhostOnlineAircraft.generated.h"

class UMaterialBillboardComponent;
class UMaterialInstanceDynamic;
class USceneComponent;

UCLASS(Blueprintable)
class AGhostOnlineAircraft : public AGhostOnlinePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BillboardRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    AGhostOnlineAircraft(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnReplicatedCoordinateAndScore(const FReplicateCoordinateAndScore& _currentValue);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 BpGetPlayerIndex();
    
};

