#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScrollMeshActor.generated.h"

UCLASS(Blueprintable)
class AScrollMeshActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScrollId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollLength;
    
public:
    AScrollMeshActor(const FObjectInitializer& ObjectInitializer);

};

