#pragma once
#include "CoreMinimal.h"
#include "L114PartN.h"
#include "LBase.h"
#include "L114.generated.h"

class UAudioComponent;
class UL114Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL114 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FL114PartN partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL114Env* Env;
    
public:
    AL114(const FObjectInitializer& ObjectInitializer);

};

