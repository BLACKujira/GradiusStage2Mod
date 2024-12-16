#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "L147Debri.generated.h"

class UMaterialInstanceDynamic;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AL147Debri : public APoolActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mi_Body;
    
public:
    AL147Debri(const FObjectInitializer& ObjectInitializer);

};

