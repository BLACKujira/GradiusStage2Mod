#pragma once
#include "CoreMinimal.h"
#include "HActorEnv.h"
#include "H050Env.generated.h"

class AEndingDriver;

UCLASS(Blueprintable)
class UH050Env : public UHActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndingDriver* EndingDriver;
    
public:
    UH050Env();

};

