#pragma once
#include "CoreMinimal.h"
#include "W001.h"
#include "PDShot.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class APDShot : public AW001 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_BODY;
    
public:
    APDShot(const FObjectInitializer& ObjectInitializer);

};

