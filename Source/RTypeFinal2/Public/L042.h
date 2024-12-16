#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L042.generated.h"

class UL042Env;
class UPoseableMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AL042 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* Po_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL042Env* Env;
    
public:
    AL042(const FObjectInitializer& ObjectInitializer);

};

