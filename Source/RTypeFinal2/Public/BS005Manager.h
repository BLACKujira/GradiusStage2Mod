#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BS005Manager.generated.h"

class ABS005Base;
class AE550;

UCLASS(Blueprintable)
class ABS005Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABS005Base*> BoidActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE550*> RockActors;
    
public:
    ABS005Manager(const FObjectInitializer& ObjectInitializer);

};

