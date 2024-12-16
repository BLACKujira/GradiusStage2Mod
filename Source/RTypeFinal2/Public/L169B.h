#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L169B.generated.h"

class UL169BEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL169B : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL169BEnv* Env;
    
public:
    AL169B(const FObjectInitializer& ObjectInitializer);

};

