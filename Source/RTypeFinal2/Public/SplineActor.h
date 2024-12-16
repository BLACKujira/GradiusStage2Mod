#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineActor.generated.h"

class UExSplineComponent;

UCLASS(Blueprintable)
class ASplineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExSplineComponent* SplineComponent;
    
    ASplineActor(const FObjectInitializer& ObjectInitializer);

};

