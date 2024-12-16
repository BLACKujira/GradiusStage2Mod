#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "E5100Manager.generated.h"

class AE5100;
class AE5101;
class AE5106;

UCLASS(Blueprintable)
class AE5100Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE5100* E5100BoidActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE5101* E5101BoidActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE5106* E5106BoidActor;
    
public:
    AE5100Manager(const FObjectInitializer& ObjectInitializer);

};

