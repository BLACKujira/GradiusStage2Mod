#pragma once
#include "CoreMinimal.h"
#include "HActorEnv.h"
#include "H006Env.generated.h"

class ADECOY;

UCLASS(Blueprintable)
class UH006Env : public UHActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADECOY*> Decoys;
    
public:
    UH006Env();

};

