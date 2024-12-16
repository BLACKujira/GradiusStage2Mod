#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "WaterlineInterface.h"
#include "E2401.generated.h"

class UChildActorComponent;
class UGroomComponent;

UCLASS(Blueprintable)
class AE2401 : public AEnemyActor, public IWaterlineInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGroomComponent* Hair;
    
public:
    AE2401(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

