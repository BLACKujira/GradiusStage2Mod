#pragma once
#include "CoreMinimal.h"
#include "PoolActor.h"
#include "L039P.generated.h"

class UL039PEnv;
class USceneComponent;

UCLASS(Blueprintable)
class AL039P : public APoolActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL039PEnv* Env;
    
public:
    AL039P(const FObjectInitializer& ObjectInitializer);

};

