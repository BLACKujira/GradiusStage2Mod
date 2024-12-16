#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H016.generated.h"

class AActor;
class AKariShotEffect;
class UAudioComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AH016 : public AHActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* MeshBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShotSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKariShotEffect* ShotEff;
    
public:
    AH016(const FObjectInitializer& ObjectInitializer);

};

