#pragma once
#include "CoreMinimal.h"
#include "W001.h"
#include "W005.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AW005 : public AW001 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_BODY;
    
public:
    AW005(const FObjectInitializer& ObjectInitializer);

};

