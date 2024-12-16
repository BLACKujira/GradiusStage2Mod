#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H062P.generated.h"

class AActor;
class UH062DataAsset;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AH062P : public AHActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UH062DataAsset* H062Asset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
public:
    AH062P(const FObjectInitializer& ObjectInitializer);

};

