#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyActor.h"
#include "WeaponHitLandEffect.generated.h"

class UWeaponHitLandEffectParam;

UCLASS(Blueprintable)
class AWeaponHitLandEffect : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponHitLandEffectParam* ParamAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionSize;
    
    AWeaponHitLandEffect(const FObjectInitializer& ObjectInitializer);

};

