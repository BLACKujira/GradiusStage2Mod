#pragma once
#include "CoreMinimal.h"
#include "MBase.h"
#include "M021B.generated.h"

class UM021DataAsset;
class USceneComponent;

UCLASS(Blueprintable)
class AM021B : public AMBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CurrentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UM021DataAsset* DataAsset;
    
public:
    AM021B(const FObjectInitializer& ObjectInitializer);

};

