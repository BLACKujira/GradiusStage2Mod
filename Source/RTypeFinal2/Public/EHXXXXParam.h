#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHXXXXParam.generated.h"

class AEPXXXX;
class UEHXXXXEnv;

UCLASS(Blueprintable)
class UEHXXXXParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHXXXXEnv* Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEPXXXX* OwnerActor;
    
    UEHXXXXParam();

};

