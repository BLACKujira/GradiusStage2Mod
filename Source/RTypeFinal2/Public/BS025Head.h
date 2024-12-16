#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS025Head.generated.h"

class ABS025;
class ABS025Sec;
class ABS025Tail;
class ASplineActor;
class UMatineeCameraShake;

UCLASS(Blueprintable)
class ABS025Head : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABS025* BossActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABS025Tail* TailActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABS025Sec*> PartActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* CameraShake;
    
public:
    ABS025Head(const FObjectInitializer& ObjectInitializer);

};

