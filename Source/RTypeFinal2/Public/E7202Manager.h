#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E7202Manager.generated.h"

UCLASS(Blueprintable)
class AE7202Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoidActors;
    
public:
    AE7202Manager(const FObjectInitializer& ObjectInitializer);

};

