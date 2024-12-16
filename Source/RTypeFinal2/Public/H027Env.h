#pragma once
#include "CoreMinimal.h"
#include "HActorEnv.h"
#include "H027Env.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UH027Env : public UHActorEnv {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ParentSearchedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ParentSearchedComponent;
    
    UH027Env();

};

