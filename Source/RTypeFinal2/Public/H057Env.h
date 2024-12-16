#pragma once
#include "CoreMinimal.h"
#include "HActorEnv.h"
#include "H057Env.generated.h"

class AH057;

UCLASS(Blueprintable)
class UH057Env : public UHActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AH057*> Decoys;
    
public:
    UH057Env();

};

