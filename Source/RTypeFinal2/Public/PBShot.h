#pragma once
#include "CoreMinimal.h"
#include "W001.h"
#include "PBShot.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class APBShot : public AW001 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_BODY;
    
public:
    APBShot(const FObjectInitializer& ObjectInitializer);

};

