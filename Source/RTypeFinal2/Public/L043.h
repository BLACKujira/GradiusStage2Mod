#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L043.generated.h"

class UL043Env;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL043 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_BODY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_Body2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL043Env* Env;
    
public:
    AL043(const FObjectInitializer& ObjectInitializer);

};

