#pragma once
#include "CoreMinimal.h"
#include "ForceActor.h"
#include "F002.generated.h"

class UCapsuleComponent;
class UF002DataAsset;

UCLASS(Blueprintable)
class AF002 : public AForceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_UA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Collision_B_LA;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UF002DataAsset* DataAssetF002;
    
public:
    AF002(const FObjectInitializer& ObjectInitializer);

};

