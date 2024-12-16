#pragma once
#include "CoreMinimal.h"
#include "BitActor.h"
#include "B006.generated.h"

class UP001DataAsset;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AB006 : public ABitActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BODYS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UP001DataAsset* DataAsset;
    
public:
    AB006(const FObjectInitializer& ObjectInitializer);

};

