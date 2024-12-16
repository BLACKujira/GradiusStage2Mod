#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L044.generated.h"

class UL044Env;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AL044 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ST_BODY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL044Env* Env;
    
public:
    AL044(const FObjectInitializer& ObjectInitializer);

};

