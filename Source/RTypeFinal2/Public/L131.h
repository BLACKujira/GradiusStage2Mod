#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L131.generated.h"

class UL131Env;
class UNiagaraComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AL131 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Burner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL131Env* Env;
    
public:
    AL131(const FObjectInitializer& ObjectInitializer);

};

