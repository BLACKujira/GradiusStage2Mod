#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H003.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AH003 : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
public:
    AH003(const FObjectInitializer& ObjectInitializer);

};

