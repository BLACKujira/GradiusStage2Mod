#pragma once
#include "CoreMinimal.h"
#include "WActorEnv.h"
#include "PDShotEnv.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPDShotEnv : public UWActorEnv {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
public:
    UPDShotEnv();

};

