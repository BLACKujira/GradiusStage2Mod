#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H025.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AH025 : public AHActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    AH025(const FObjectInitializer& ObjectInitializer);

};

