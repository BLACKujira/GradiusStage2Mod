#pragma once
#include "CoreMinimal.h"
#include "BS005Base.h"
#include "BS005A.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class ABS005A : public ABS005Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioRapid;
    
public:
    ABS005A(const FObjectInitializer& ObjectInitializer);

};

