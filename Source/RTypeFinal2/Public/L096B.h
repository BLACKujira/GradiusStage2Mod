#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L096B.generated.h"

class UL096BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL096B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL096BEnv* Env;
    
public:
    AL096B(const FObjectInitializer& ObjectInitializer);

};

