#pragma once
#include "CoreMinimal.h"
#include "WActorParam.h"
#include "EWXXXXParam.generated.h"

class AEPXXXX;

UCLASS(Blueprintable)
class UEWXXXXParam : public UWActorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEPXXXX* ParentActor;
    
    UEWXXXXParam();

};

