#pragma once
#include "CoreMinimal.h"
#include "WActorParam.h"
#include "W010Param.generated.h"

class AB014;

UCLASS(Blueprintable)
class UW010Param : public UWActorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AB014* Bitp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SName;
    
    UW010Param();

};

