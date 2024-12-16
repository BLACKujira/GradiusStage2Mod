#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E541.generated.h"

class AActor;

UCLASS(Blueprintable)
class AE541 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReflectActor;
    
public:
    AE541(const FObjectInitializer& ObjectInitializer);

};

