#pragma once
#include "CoreMinimal.h"
#include "W001.h"
#include "W004.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AW004 : public AW001 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_BODY;
    
public:
    AW004(const FObjectInitializer& ObjectInitializer);

};

