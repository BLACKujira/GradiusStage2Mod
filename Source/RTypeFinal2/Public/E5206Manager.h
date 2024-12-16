#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E5206Manager.generated.h"

class AE5206;

UCLASS(Blueprintable)
class AE5206Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE5206*> BoidActors;
    
public:
    AE5206Manager(const FObjectInitializer& ObjectInitializer);

};

