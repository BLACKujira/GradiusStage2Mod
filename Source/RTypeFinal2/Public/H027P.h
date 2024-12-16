#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H027P.generated.h"

class AActor;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AH027P : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SearchedComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    AH027P(const FObjectInitializer& ObjectInitializer);

};

