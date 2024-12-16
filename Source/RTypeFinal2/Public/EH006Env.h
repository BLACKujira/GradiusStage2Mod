#pragma once
#include "CoreMinimal.h"
#include "EHXXXXEnv.h"
#include "EH006Env.generated.h"

class AEH006Decoy;

UCLASS(Blueprintable)
class UEH006Env : public UEHXXXXEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEH006Decoy*> Decoys;
    
public:
    UEH006Env();

};

