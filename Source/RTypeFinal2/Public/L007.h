#pragma once
#include "CoreMinimal.h"
#include "L007PartM.h"
#include "L007PartN.h"
#include "LBase.h"
#include "L007.generated.h"

class UAudioComponent;
class UL007Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL007 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FL007PartM> PartM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FL007PartN partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL007Env* Env;
    
public:
    AL007(const FObjectInitializer& ObjectInitializer);

};

