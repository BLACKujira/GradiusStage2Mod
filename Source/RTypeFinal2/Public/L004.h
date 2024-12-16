#pragma once
#include "CoreMinimal.h"
#include "L004PartM.h"
#include "L004PartN.h"
#include "LBase.h"
#include "L004.generated.h"

class UAudioComponent;
class UL004Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL004 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL004PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL004PartN> partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL004Env* Env;
    
public:
    AL004(const FObjectInitializer& ObjectInitializer);

};

