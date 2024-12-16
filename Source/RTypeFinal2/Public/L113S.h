#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L113S.generated.h"

class UL113SEnv;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL113S : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL113SEnv* Env;
    
public:
    AL113S(const FObjectInitializer& ObjectInitializer);

};

