#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H042P.generated.h"

class AActor;
class UH042DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AH042P : public AHActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH042DataAsset* H042Asset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
public:
    AH042P(const FObjectInitializer& ObjectInitializer);

};

