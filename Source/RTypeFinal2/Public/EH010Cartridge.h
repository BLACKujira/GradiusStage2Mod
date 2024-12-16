#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "EH010Cartridge.generated.h"

class UEHXXXXParam;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AEH010Cartridge : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXParam* Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    AEH010Cartridge(const FObjectInitializer& ObjectInitializer);

};

