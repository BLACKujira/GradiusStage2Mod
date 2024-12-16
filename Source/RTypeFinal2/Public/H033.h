#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H033.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AH033 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyMeshComponent;
    
public:
    AH033(const FObjectInitializer& ObjectInitializer);

};

