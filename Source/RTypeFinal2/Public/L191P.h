#pragma once
#include "CoreMinimal.h"
#include "LBase.h"
#include "L191P.generated.h"

class AL191;
class UL191Env;
class USceneComponent;

UCLASS(Blueprintable)
class AL191P : public ALBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LaserRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UL191Env* Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AL191*> ChildArr;
    
public:
    AL191P(const FObjectInitializer& ObjectInitializer);

};

