#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L032.generated.h"

class UL032Env;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AL032 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SM_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL032Env* Env;
    
public:
    AL032(const FObjectInitializer& ObjectInitializer);

};

