#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L045.generated.h"

class UL045Env;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL045 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ST_BODY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL045Env* Env;
    
public:
    AL045(const FObjectInitializer& ObjectInitializer);

};

