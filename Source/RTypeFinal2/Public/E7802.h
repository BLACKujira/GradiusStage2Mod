#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7802.generated.h"

class UEHXXXXEnv;

UCLASS(Blueprintable)
class AE7802 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* WCannonEnv;
    
public:
    AE7802(const FObjectInitializer& ObjectInitializer);

};

