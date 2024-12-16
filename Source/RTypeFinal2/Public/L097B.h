#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L097B.generated.h"

class UL097BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL097B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL097BEnv* Env;
    
public:
    AL097B(const FObjectInitializer& ObjectInitializer);

};

