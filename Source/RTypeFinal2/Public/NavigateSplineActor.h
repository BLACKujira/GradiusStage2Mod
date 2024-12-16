#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "NavigateInterface.h"
#include "NavigateSplineActor.generated.h"

class USplineCmdAsset;
class USplineCmdPlayer;

UCLASS(Blueprintable)
class ANavigateSplineActor : public AActor, public INavigateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineCmdPlayer* SplineCmdPlayer;
    
public:
    ANavigateSplineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartMove(USplineCmdAsset* _splineCmd);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateOffset(const FRotator& _rot);
    

    // Fix for true pure virtual functions not being implemented
};

