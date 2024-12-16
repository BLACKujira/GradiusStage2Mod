#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH015.generated.h"

class UEH015PParam;

UCLASS(Blueprintable)
class AEH015 : public AEHXXXX {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEH015PParam* EH015PParam;
    
public:
    AEH015(const FObjectInitializer& ObjectInitializer);

};

