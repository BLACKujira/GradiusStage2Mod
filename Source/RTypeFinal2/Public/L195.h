#pragma once
#include "CoreMinimal.h"
#include "L195PartM.h"
#include "L195PartT.h"
#include "LBase.h"
#include "L195.generated.h"

class UL195DataAsset;
class UL195Env;
class UNiagaraComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AL195 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BASE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL195PartM> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL195PartT> PartT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL195Env* Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL195DataAsset* DataAsset;
    
public:
    AL195(const FObjectInitializer& ObjectInitializer);

};

