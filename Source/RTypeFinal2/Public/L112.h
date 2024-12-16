#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L112.generated.h"

class UL112Env;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL112 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL112Env* Env;
    
public:
    AL112(const FObjectInitializer& ObjectInitializer);

};

