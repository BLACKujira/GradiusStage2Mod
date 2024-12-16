#pragma once
#include "CoreMinimal.h"
#include "W001.h"
#include "W010.generated.h"

class AB014;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AW010 : public AW001 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_BODY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AB014* Bitp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SName;
    
public:
    AW010(const FObjectInitializer& ObjectInitializer);

};

