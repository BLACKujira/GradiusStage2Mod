#pragma once
#include "CoreMinimal.h"
#include "L036PartM.h"
#include "L036PartN.h"
#include "LBase.h"
#include "L036.generated.h"

class UAudioComponent;
class UL036Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL036 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL036PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FL036PartN partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL036Env* Env;
    
public:
    AL036(const FObjectInitializer& ObjectInitializer);

};

