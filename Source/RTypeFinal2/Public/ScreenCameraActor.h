#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScreenCameraActor.generated.h"

class UCameraComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AScreenCameraActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ScreenCamera;
    
public:
    AScreenCameraActor(const FObjectInitializer& ObjectInitializer);

};

