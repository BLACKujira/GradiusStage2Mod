#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L173B.generated.h"

class UL173BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL173B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL173BEnv* Env;
    
public:
    AL173B(const FObjectInitializer& ObjectInitializer);

};

