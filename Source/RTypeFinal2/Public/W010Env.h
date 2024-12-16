#pragma once
#include "CoreMinimal.h"
#include "WActorEnv.h"
#include "W010Env.generated.h"

class UObject;

UCLASS(Blueprintable)
class UW010Env : public UWActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
public:
    UW010Env();

    UFUNCTION(BlueprintCallable)
    void CbFireInterval(int32 _idx);
    
};

