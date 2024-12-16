#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L146.generated.h"

class UL146Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL146 : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL146Env* Env;
    
public:
    AL146(const FObjectInitializer& ObjectInitializer);

};

