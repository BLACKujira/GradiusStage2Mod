#pragma once
#include "CoreMinimal.h"
#include "GhostPlayerBase.h"
#include "GhostOnlinePlayer.generated.h"

class AActor;

UCLASS(Blueprintable)
class AGhostOnlinePlayer : public AGhostPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    AGhostOnlinePlayer(const FObjectInitializer& ObjectInitializer);

};

