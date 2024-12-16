#pragma once
#include "CoreMinimal.h"
#include "L034PartN.h"
#include "LBase.h"
#include "L034.generated.h"

class UAudioComponent;
class UL034Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL034 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* lpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FL034PartN partN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL034Env* Env;
    
public:
    AL034(const FObjectInitializer& ObjectInitializer);

};

