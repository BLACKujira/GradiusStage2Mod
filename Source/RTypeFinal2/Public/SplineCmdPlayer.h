#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SplineCmdPlayer.generated.h"

class USplineCmdAsset;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineCmdPlayer : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USplineCmdAsset* Data;
    
public:
    USplineCmdPlayer(const FObjectInitializer& ObjectInitializer);

};

