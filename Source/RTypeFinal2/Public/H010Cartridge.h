#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "H010Cartridge.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AH010Cartridge : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    AH010Cartridge(const FObjectInitializer& ObjectInitializer);

};

