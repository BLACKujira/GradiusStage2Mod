#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LaserEnv.generated.h"

class UObjectPoolActor;

UCLASS(Blueprintable)
class ULaserEnv : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* EffPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectPoolActor* ShotPool;
    
    ULaserEnv();

    UFUNCTION(BlueprintCallable)
    void CbFireInterval(int32 _idx);
    
};

