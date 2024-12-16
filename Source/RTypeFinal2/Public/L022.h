#pragma once
#include "CoreMinimal.h"
#include "L022PartM.h"
#include "L022PartN.h"
#include "LBase.h"
#include "L022.generated.h"

class UAudioComponent;
class UL022Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL022 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL022PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FL022PartN partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL022Env* Env;
    
public:
    AL022(const FObjectInitializer& ObjectInitializer);

};

