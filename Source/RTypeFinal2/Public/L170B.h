#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L170B.generated.h"

class UL170BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL170B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL170BEnv* Env;
    
public:
    AL170B(const FObjectInitializer& ObjectInitializer);

};

