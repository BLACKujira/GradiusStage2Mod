#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E5403Manager.generated.h"

class AE5405;

UCLASS(Blueprintable)
class AE5403Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE5405*> BoidActors;
    
public:
    AE5403Manager(const FObjectInitializer& ObjectInitializer);

};

