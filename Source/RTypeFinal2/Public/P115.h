#pragma once
#include "CoreMinimal.h"
#include "AircraftBasePawn.h"
#include "P115.generated.h"

class UMaterialInstanceDynamic;
class UP115DataAsset;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AP115 : public AAircraftBasePawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP115DataAsset* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DCMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DCMIDynamics;
    
public:
    AP115(const FObjectInitializer& ObjectInitializer);

};

