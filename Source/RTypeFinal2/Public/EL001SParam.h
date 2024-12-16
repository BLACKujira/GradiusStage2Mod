#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EL001SParam.generated.h"

class AActor;
class UEL001SEnv;

UCLASS(Blueprintable)
class UEL001SParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEL001SEnv* Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UEL001SParam();

};

