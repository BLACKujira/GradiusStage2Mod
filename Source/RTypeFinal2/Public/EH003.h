#pragma once
#include "CoreMinimal.h"
#include "EHXXXX.h"
#include "EH003.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AEH003 : public AEHXXXX {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
public:
    AEH003(const FObjectInitializer& ObjectInitializer);

};

