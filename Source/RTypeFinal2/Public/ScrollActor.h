#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScrollActor.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class AScrollActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    AScrollActor(const FObjectInitializer& ObjectInitializer);

};

