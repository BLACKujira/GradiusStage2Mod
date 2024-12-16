#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHXXXXEnv.generated.h"

class AEHXXXX;
class UEPXXXXParam;
class UH000DataAsset;

UCLASS(Blueprintable)
class UEHXXXXEnv : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEPXXXXParam* Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH000DataAsset* WaveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHXXXX* WaveActor;
    
public:
    UEHXXXXEnv();

};

