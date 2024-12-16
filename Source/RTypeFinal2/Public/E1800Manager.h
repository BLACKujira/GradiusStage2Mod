#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E1800Manager.generated.h"

class AE1800;
class UE1800Param;

UCLASS(Blueprintable)
class AE1800Manager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1800Param* ParamE1800;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE1800*> ScoreActors;
    
public:
    AE1800Manager(const FObjectInitializer& ObjectInitializer);

};

