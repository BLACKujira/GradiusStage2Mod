#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "H009Cartridge.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AH009Cartridge : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    AH009Cartridge(const FObjectInitializer& ObjectInitializer);

};

