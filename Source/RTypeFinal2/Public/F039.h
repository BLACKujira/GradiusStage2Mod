#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F039.generated.h"

class UCapsuleComponent;
class UF039DataAsset;

UCLASS(Blueprintable)
class AF039 : public AForceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_UA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_LA;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF039DataAsset* DataAssetF039;
    
public:
    AF039(const FObjectInitializer& ObjectInitializer);

};

