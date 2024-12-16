#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2201.generated.h"

class UAudioComponent;
class UPointLightComponent;
class USpotLightComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AE2201 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponent;
    
public:
    AE2201(const FObjectInitializer& ObjectInitializer);

};

