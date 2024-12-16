#pragma once
#include "CoreMinimal.h"
#include "W001.h"
#include "W007.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AW007 : public AW001 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_BODY;
    
public:
    AW007(const FObjectInitializer& ObjectInitializer);

};

