#pragma once
#include "CoreMinimal.h"
#include "WActorEnv.h"
#include "W011Env.generated.h"

class UObject;

UCLASS(Blueprintable)
class UW011Env : public UWActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
public:
    UW011Env();

};

