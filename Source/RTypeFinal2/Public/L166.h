#pragma once
#include "CoreMinimal.h"
#include "L166PartN.h"
#include "LBase.h"
#include "L166.generated.h"

class UAudioComponent;
class UL166Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL166 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FL166PartN partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL166Env* Env;
    
public:
    AL166(const FObjectInitializer& ObjectInitializer);

};

